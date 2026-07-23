/*
 * XREFs of sub_140B2EBF4 @ 0x140B2EBF4
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     HalQueryRealTimeClock @ 0x14022D360 (HalQueryRealTimeClock.c)
 *     sub_14022D554 @ 0x14022D554 (sub_14022D554.c)
 *     ExSystemTimeToLocalTime @ 0x14022D770 (ExSystemTimeToLocalTime.c)
 *     ExLocalTimeToSystemTime @ 0x14022D7D0 (ExLocalTimeToSystemTime.c)
 *     sub_1402D1A48 @ 0x1402D1A48 (sub_1402D1A48.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     HalSetRealTimeClock @ 0x140503420 (HalSetRealTimeClock.c)
 */

LARGE_INTEGER __fastcall sub_140B2EBF4(__int64 a1, LARGE_INTEGER *a2)
{
  bool v3; // zf
  LARGE_INTEGER v5; // rbx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // rcx
  char *v10; // rbx
  unsigned int v11; // edi
  LARGE_INTEGER v12; // rax
  unsigned int v13; // r8d
  LARGE_INTEGER result; // rax
  __int64 *v15; // rbx
  LARGE_INTEGER *p_SystemTime; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  _TIME_FIELDS v22; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+70h] [rbp+28h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+78h] [rbp+30h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp+38h] BYREF
  LARGE_INTEGER v26; // [rsp+88h] [rbp+40h] BYREF

  v25 = 0LL;
  v20.QuadPart = 0LL;
  v3 = (*(_BYTE *)(a1 + 2656) & 1) == 0;
  v5 = *(LARGE_INTEGER *)(a1 + 2632);
  v22 = 0LL;
  LocalTime = v5;
  if ( v3 && !dword_140D01460 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &LocalTime);
    v5 = LocalTime;
  }
  v7 = sub_14042A5E0(&v25, a2) - *(_QWORD *)(a1 + 2640);
  v8 = v7 * (unsigned __int128)0x989680uLL;
  v21 = *((_QWORD *)&v8 + 1);
  if ( is_mul_ok(v7, 0x989680uLL) )
  {
    v9 = v8 / v25;
  }
  else
  {
    v6 = v25;
    v9 = 10000000 * (v7 / v25) + 10000000 * (v7 % v25) / v25;
  }
  v3 = (*(_BYTE *)(a1 + 2656) & 2) == 0;
  SystemTime.QuadPart = v9 + v5.QuadPart;
  if ( v3 )
  {
    p_SystemTime = &SystemTime;
    if ( !dword_140D01460 )
    {
      ExSystemTimeToLocalTime(&SystemTime, &v20);
      p_SystemTime = &v20;
    }
    sub_1402D1A48((__int64 *)p_SystemTime, &v22, v6);
    HalSetRealTimeClock(&v22);
    goto LABEL_16;
  }
  if ( (qword_140C15C78 & 4) != 0 || !HalQueryRealTimeClock((__int64)&v22) )
    goto LABEL_16;
  v26.QuadPart = 0LL;
  v10 = (char *)qword_140C15B58;
  if ( !qword_140C15B58 || !*(_BYTE *)qword_140C15B58 )
  {
    if ( sub_14022D554(&v22.Year, &SystemTime) )
      goto LABEL_14;
    goto LABEL_16;
  }
  v11 = *((_DWORD *)qword_140C15B58 + 1);
  _InterlockedOr(v19, 0);
  if ( !sub_14022D554(&v22.Year, &v26) )
    goto LABEL_16;
  v12 = v26;
  v13 = 0;
  if ( !v11 )
    goto LABEL_13;
  v15 = (__int64 *)(v10 + 8);
  while ( 1 )
  {
    v17 = *v15;
    if ( *v15 >= 0 )
    {
      if ( v12.QuadPart < v17 + 10000000 )
      {
        if ( v12.QuadPart < v17 )
          goto LABEL_13;
        v12.QuadPart = 2 * v12.QuadPart - v17;
      }
      else
      {
        v12.QuadPart += 10000000LL;
      }
      goto LABEL_29;
    }
    v18 = v17 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v12.QuadPart < v18 + 10000000 )
      break;
    v12.QuadPart -= 10000000LL;
LABEL_29:
    ++v13;
    ++v15;
    if ( v13 >= v11 )
      goto LABEL_13;
  }
  if ( v12.QuadPart < v18 )
  {
LABEL_13:
    SystemTime = v12;
LABEL_14:
    if ( !dword_140D01460 )
      ExLocalTimeToSystemTime(&SystemTime, &SystemTime);
  }
LABEL_16:
  result = SystemTime;
  *a2 = SystemTime;
  return result;
}
