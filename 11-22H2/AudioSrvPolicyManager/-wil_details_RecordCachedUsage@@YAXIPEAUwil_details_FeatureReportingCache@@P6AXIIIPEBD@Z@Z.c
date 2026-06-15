/*
 * XREFs of ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18003BC70
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180013ED8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18003A8D8 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil_details_RecordCachedUsage(
        wil::details *this,
        struct wil_details_FeatureReportingCache *a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  unsigned int v4; // esi
  unsigned __int32 v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // ebx
  unsigned int *v8; // rdi
  __int64 v9; // rax
  _DWORD v10[9]; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+44h] [rbp-2Ch]
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+4Ch] [rbp-24h]
  int v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+54h] [rbp-1Ch]
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]

  v4 = (unsigned int)this;
  _m_prefetchw(a2);
  v5 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v6 = (v5 >> 1) & 0xF;
  if ( v6 )
  {
    _m_prefetchw((char *)a2 + 4);
    v6 &= ~_InterlockedOr((volatile signed __int32 *)a2 + 1, v6);
  }
  v10[0] = 2;
  v10[1] = v6 & 1;
  v10[2] = 6;
  v10[3] = ((unsigned __int8)v6 >> 1) & 1;
  v10[4] = 3;
  v10[5] = ((unsigned __int8)v6 >> 2) & 1;
  v10[6] = 7;
  v10[7] = v6 >= 8;
  v10[8] = 0;
  v12 = 4;
  if ( (v5 & 0x4000) != 0 )
  {
    v11 = 0;
    v13 = (v5 >> 5) & 0x1FF;
  }
  else
  {
    v11 = (v5 >> 5) & 0x1FF;
    v13 = 0;
  }
  v14 = 1;
  v16 = 5;
  if ( (v5 & 0x400000) != 0 )
  {
    v15 = 0;
    v17 = (v5 >> 15) & 0x7F;
  }
  else
  {
    v15 = (v5 >> 15) & 0x7F;
    v17 = 0;
  }
  v7 = 0;
  v8 = v10;
  do
  {
    v9 = HIDWORD(*(_QWORD *)v8);
    if ( (_DWORD)v9 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v4, *v8, v9, 0LL);
    ++v7;
    v8 += 2;
  }
  while ( v7 < 8 );
}
