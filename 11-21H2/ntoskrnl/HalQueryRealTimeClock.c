/*
 * XREFs of HalQueryRealTimeClock @ 0x14022D360
 * Callers:
 *     sub_14051F6C4 @ 0x14051F6C4 (sub_14051F6C4.c)
 *     sub_1408357A0 @ 0x1408357A0 (sub_1408357A0.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_140A47884 @ 0x140A47884 (sub_140A47884.c)
 *     sub_140A523B0 @ 0x140A523B0 (sub_140A523B0.c)
 *     sub_140B2EBF4 @ 0x140B2EBF4 (sub_140B2EBF4.c)
 * Callees:
 *     sub_14022D554 @ 0x14022D554 (sub_14022D554.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     sub_14022D82C @ 0x14022D82C (sub_14022D82C.c)
 *     sub_14022DA40 @ 0x14022DA40 (sub_14022DA40.c)
 *     sub_1402D1A48 @ 0x1402D1A48 (sub_1402D1A48.c)
 *     sub_14038B7AC @ 0x14038B7AC (sub_14038B7AC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14050FD3C @ 0x14050FD3C (sub_14050FD3C.c)
 *     sub_14090805C @ 0x14090805C (sub_14090805C.c)
 *     sub_140908124 @ 0x140908124 (sub_140908124.c)
 */

char __fastcall HalQueryRealTimeClock(__int64 a1)
{
  char *v2; // rdi
  char v3; // bl
  unsigned int v4; // esi
  LARGE_INTEGER v5; // rax
  unsigned int v6; // r8d
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // ebx
  int v12; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // r9
  int v15; // edi
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  signed __int32 v21[8]; // [rsp+0h] [rbp-70h] BYREF
  _BYTE v22[8]; // [rsp+20h] [rbp-50h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+28h] [rbp-48h] BYREF
  LARGE_INTEGER v24; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v25[2]; // [rsp+38h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+58h] [rbp-18h] BYREF

  LocalTime.QuadPart = 0LL;
  v22[0] = 0;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v25[0] = 0LL;
  sub_14022DA40(0LL);
  if ( (dword_140C0C60C & 4) == 0 )
    goto LABEL_29;
  sub_14022D82C(v25);
  v24.QuadPart = 0LL;
  v2 = (char *)qword_140C15B58;
  v3 = 1;
  v25[1] = 0LL;
  if ( !qword_140C15B58 || !*(_BYTE *)qword_140C15B58 )
  {
    if ( (unsigned __int8)sub_14022D554(v25, &LocalTime) )
      goto LABEL_7;
    goto LABEL_29;
  }
  v4 = *((_DWORD *)qword_140C15B58 + 1);
  _InterlockedOr(v21, 0);
  if ( !(unsigned __int8)sub_14022D554(v25, &v24) )
    goto LABEL_29;
  v5 = v24;
  v6 = 0;
  if ( !v4 )
    goto LABEL_6;
  v8 = (__int64 *)(v2 + 8);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 >= 0 )
    {
      if ( v5.QuadPart < v9 + 10000000 )
      {
        if ( v5.QuadPart < v9 )
          goto LABEL_6;
        v5.QuadPart = 2 * v5.QuadPart - v9;
      }
      else
      {
        v5.QuadPart += 10000000LL;
      }
      goto LABEL_23;
    }
    v10 = v9 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v5.QuadPart < v10 + 10000000 )
      break;
    v5.QuadPart -= 10000000LL;
LABEL_23:
    ++v6;
    v24 = v5;
    ++v8;
    if ( v6 >= v4 )
      goto LABEL_6;
  }
  if ( v5.QuadPart < v10 || v5.QuadPart >= v10 + 10000000 )
  {
LABEL_6:
    LocalTime = v5;
LABEL_7:
    if ( !dword_140D01460 )
      ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
LABEL_9:
    if ( MEMORY[0xFFFFF78000000014] > LocalTime.QuadPart + 864000000000LL )
    {
      LocalTime.QuadPart = MEMORY[0xFFFFF78000000014];
      _InterlockedOr(&dword_140C4E350, 1u);
    }
    if ( !dword_140D01460 )
      ExSystemTimeToLocalTime(&LocalTime, &LocalTime);
    sub_1402D1A48(&LocalTime, a1);
    return v3;
  }
LABEL_29:
  v11 = dword_140C4BFCC;
  if ( KeGetCurrentIrql() < 2u && !dword_140C4BFCC )
  {
    v12 = sub_140908124(Timeout);
    if ( v12 < 0 )
    {
      if ( v12 != -1073741822 )
        _InterlockedOr(&dword_140C4E350, 2u);
    }
    else if ( (int)sub_14090805C(Timeout, &LocalTime) >= 0 )
    {
LABEL_33:
      v3 = 1;
      goto LABEL_9;
    }
  }
  if ( byte_140C4BFC8 && v11 && (dword_140C0C60C & 8) == 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v15 = sub_14050FD3C(&LocalTime);
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v14 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v14 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v15 = sub_14050FD3C(&LocalTime);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    if ( v15 >= 0 )
      goto LABEL_33;
    if ( v15 != -1073741822 )
      _InterlockedOr(&dword_140C4E350, 4u);
  }
  v3 = sub_14038B7AC(&LocalTime, v22);
  if ( v3 )
  {
    if ( !v22[0] )
      _InterlockedOr(&dword_140C4E350, 8u);
    goto LABEL_9;
  }
  _InterlockedOr(&dword_140C4E350, 0x10u);
  return v3;
}
