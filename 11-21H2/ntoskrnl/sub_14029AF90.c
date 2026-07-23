/*
 * XREFs of sub_14029AF90 @ 0x14029AF90
 * Callers:
 *     sub_14029B950 @ 0x14029B950 (sub_14029B950.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_14029AEF0 @ 0x14029AEF0 (sub_14029AEF0.c)
 *     sub_14029B210 @ 0x14029B210 (sub_14029B210.c)
 *     sub_14029B270 @ 0x14029B270 (sub_14029B270.c)
 *     sub_14029B804 @ 0x14029B804 (sub_14029B804.c)
 *     sub_14029B8BC @ 0x14029B8BC (sub_14029B8BC.c)
 *     sub_14029B8E8 @ 0x14029B8E8 (sub_14029B8E8.c)
 *     sub_1402DA760 @ 0x1402DA760 (sub_1402DA760.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14041F650 @ 0x14041F650 (sub_14041F650.c)
 *     sub_14041F720 @ 0x14041F720 (sub_14041F720.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A73424 @ 0x140A73424 (sub_140A73424.c)
 *     sub_140A92FF0 @ 0x140A92FF0 (sub_140A92FF0.c)
 *     sub_140A9307C @ 0x140A9307C (sub_140A9307C.c)
 */

__int64 __fastcall sub_14029AF90(__int64 a1, __int64 a2)
{
  __int16 v4; // bp
  bool v5; // bp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rax
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rax
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // r9
  LARGE_INTEGER v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD v23[20]; // [rsp+30h] [rbp-E8h] BYREF
  int v24; // [rsp+110h] [rbp-8h]

  memset(v23, 0, 0x98uLL);
  if ( qword_140D312C0 || qword_140D31940 || (result = (unsigned int)dword_140C31E20, (dword_140C31E20 & 3) != 0) )
  {
    if ( dword_140C1B2A0 )
      sub_140A9307C();
    v4 = v24;
    _disable();
    v5 = (v4 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    sub_14029B8E8(*((_QWORD *)CurrentPrcb + 216), qword_140D06A68 | 0x100);
    sub_14029B8BC(CurrentPrcb);
    *((_DWORD *)CurrentPrcb + 2914) = 2;
    LOBYTE(v8) = 1;
    sub_14042A5E0(v8, 0LL);
    if ( a1 )
    {
      sub_14029AEF0(a1, a2);
    }
    else
    {
      RtlCaptureContext(*((PCONTEXT *)CurrentPrcb + 4408));
      sub_14041F720((char *)CurrentPrcb + 256);
    }
    v9 = (volatile signed __int32 *)*((_QWORD *)CurrentPrcb + 4375);
    if ( v9 )
      _InterlockedOr(v9, 0x20000u);
    KeQueryPerformanceCounter(0LL);
    while ( (*((_DWORD *)CurrentPrcb + 2914) & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)qword_140C2AD88 )
      {
        memset(v23, 0, 0x98uLL);
        LODWORD(v23[0]) = -2147483641;
        v23[1] = v23;
        v23[2] = *(_QWORD *)(*((_QWORD *)CurrentPrcb + 4408) + 248LL);
        if ( (unsigned __int8)sub_140A73424(v23, *((_QWORD *)CurrentPrcb + 4408), 0LL) != 3 )
          sub_1402DA760(qword_140C2AD80);
      }
      v10 = qword_140C2AD98;
      PerformanceFrequency.QuadPart = 0LL;
      if ( CurrentPrcb == (struct _KPRCB *)qword_140C2AD98 )
      {
        v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( (unsigned __int64)(1000 * (v15.QuadPart - qword_140C2AD70)) / PerformanceFrequency.QuadPart > 0x1F4 )
          qword_140C2AD70 = v15.QuadPart;
      }
      if ( v10
        && (struct _KPRCB *)v10 != CurrentPrcb
        && qword_140C2AD88
        && (struct _KPRCB *)qword_140C2AD88 != CurrentPrcb )
      {
        _mm_pause();
      }
    }
    v11 = (volatile signed __int32 *)*((_QWORD *)CurrentPrcb + 4375);
    if ( v11 )
      _InterlockedAnd(v11, 0xFFFDFFFF);
    sub_14042A5E0(0LL, (unsigned __int8)byte_140D01160);
    if ( a1 )
      sub_14029B804(a1, a2);
    else
      sub_14041F650((char *)CurrentPrcb + 256);
    v12 = __readcr4();
    if ( (v12 & 0x20080) != 0 )
    {
      __writecr4(v12 ^ 0x80);
      __writecr4(v12);
    }
    else
    {
      v16 = __readcr3();
      __writecr3(v16);
    }
    *((_DWORD *)CurrentPrcb + 2914) = 0;
    sub_14029B270(CurrentPrcb);
    sub_14029B210(*((_QWORD *)CurrentPrcb + 216), qword_140D06A68 | 0x100);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = *((_QWORD *)v18 + 4375);
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C(v18);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v5 )
      _enable();
    if ( dword_140C1B2A0 )
      return sub_140A92FF0();
  }
  return result;
}
