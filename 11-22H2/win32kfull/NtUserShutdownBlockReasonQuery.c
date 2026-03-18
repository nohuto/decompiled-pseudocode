/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C00B5E20
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0048AB8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  size_t *Prop; // r15
  unsigned int *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax

  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  v11 = 0;
  if ( v6 )
  {
    Prop = (size_t *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL);
      goto LABEL_4;
    }
    v14 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v15 = *v14;
    if ( (unsigned int)v15 > 0x101 )
      v15 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v15 )
        goto LABEL_3;
      v16 = v15;
      ProbeForWrite(a2, 2 * v15, 2u);
      RtlStringCchCopyW((unsigned __int16 *)a2, v16, Prop);
    }
    v8 = MmUserProbeAddress;
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v17 = -1LL;
    do
      ++v17;
    while ( *((_WORD *)Prop + v17) );
    *a3 = v17 + 1;
    v11 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
