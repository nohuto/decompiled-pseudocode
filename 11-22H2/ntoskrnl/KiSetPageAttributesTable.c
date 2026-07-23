/*
 * XREFs of KiSetPageAttributesTable @ 0x140A8D010
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14056BFE4 (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14039AAE0 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void KiSetPageAttributesTable()
{
  int v0; // r8d
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v2; // di
  unsigned int v3; // ecx
  __int64 v4; // rax
  char v5; // dl
  int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned __int64 v11; // [rsp+20h] [rbp-28h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-8h]

  v0 = 0;
  v11 = 0x7010600070106LL;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v2 = (v13 & 0x200) != 0;
  v3 = 0;
  v12 = __readmsr(0x277u);
  v4 = 0LL;
  do
  {
    v5 = *((_BYTE *)&v12 + v4);
    if ( v5 == 6 )
    {
      if ( *((_BYTE *)&v11 + v4) != 6 )
      {
        v6 = 2;
LABEL_17:
        __wbinvd();
        goto LABEL_14;
      }
    }
    else if ( v5 != *((_BYTE *)&v11 + v4) )
    {
      v0 |= 1u;
    }
    ++v3;
    ++v4;
  }
  while ( v3 < 8 );
  if ( !v0 )
    goto LABEL_9;
  v6 = v0 & 2;
  if ( (v0 & 2) != 0 )
    goto LABEL_17;
LABEL_14:
  KeFlushCurrentTbImmediately();
  __writemsr(0x277u, v11);
  if ( v6 )
    __wbinvd();
  KeFlushCurrentTbImmediately();
LABEL_9:
  if ( v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      _m_prefetchw(v8);
      v9 = *v8;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(v8, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
}
