/*
 * XREFs of ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18004C2B0
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18007CE34 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18007EB28 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
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
  const char *v10; // [rsp+20h] [rbp-50h] BYREF
  int v11; // [rsp+28h] [rbp-48h]
  int v12; // [rsp+2Ch] [rbp-44h]
  int v13; // [rsp+30h] [rbp-40h]
  int v14; // [rsp+34h] [rbp-3Ch]
  int v15; // [rsp+38h] [rbp-38h]
  BOOL v16; // [rsp+3Ch] [rbp-34h]
  int v17; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+44h] [rbp-2Ch]
  int v19; // [rsp+48h] [rbp-28h]
  int v20; // [rsp+4Ch] [rbp-24h]
  int v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+54h] [rbp-1Ch]
  int v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+5Ch] [rbp-14h]

  v4 = (unsigned int)this;
  _m_prefetchw(a2);
  v5 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v6 = (v5 >> 1) & 0xF;
  if ( v6 )
  {
    _m_prefetchw((char *)a2 + 4);
    v6 &= ~_InterlockedOr((volatile signed __int32 *)a2 + 1, v6);
  }
  LODWORD(v10) = 2;
  HIDWORD(v10) = v6 & 1;
  v11 = 6;
  v12 = ((unsigned __int8)v6 >> 1) & 1;
  v13 = 3;
  v14 = ((unsigned __int8)v6 >> 2) & 1;
  v15 = 7;
  v16 = v6 >= 8;
  v17 = 0;
  v19 = 4;
  if ( (v5 & 0x4000) != 0 )
  {
    v18 = 0;
    v20 = (v5 >> 5) & 0x1FF;
  }
  else
  {
    v18 = (v5 >> 5) & 0x1FF;
    v20 = 0;
  }
  v21 = 1;
  v23 = 5;
  if ( (v5 & 0x400000) != 0 )
  {
    v22 = 0;
    v24 = (v5 >> 15) & 0x7F;
  }
  else
  {
    v22 = (v5 >> 15) & 0x7F;
    v24 = 0;
  }
  v7 = 0;
  v8 = (unsigned int *)&v10;
  do
  {
    v9 = HIDWORD(*(_QWORD *)v8);
    if ( (_DWORD)v9 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v4, *v8, v9, 0, v10);
    ++v7;
    v8 += 2;
  }
  while ( v7 < 8 );
}
