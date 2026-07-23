/*
 * XREFs of sub_140762AEC @ 0x140762AEC
 * Callers:
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140952854 @ 0x140952854 (sub_140952854.c)
 *     sub_1409F6F98 @ 0x1409F6F98 (sub_1409F6F98.c)
 * Callees:
 *     sub_140762BAC @ 0x140762BAC (sub_140762BAC.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     sub_140799218 @ 0x140799218 (sub_140799218.c)
 *     sub_140957EC8 @ 0x140957EC8 (sub_140957EC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140762AEC(PVOID *a1, _DWORD *a2)
{
  bool v4; // zf
  __int64 result; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  const WCHAR *v7; // [rsp+28h] [rbp-28h]
  PVOID *v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+3Ch] [rbp-14h]
  _DWORD *v11; // [rsp+40h] [rbp-10h]
  unsigned int *v12; // [rsp+48h] [rbp-8h]
  unsigned int v13; // [rsp+60h] [rbp+10h] BYREF

  v10 = 0;
  v6[1] = 0;
  if ( a1 )
    *a1 = 0LL;
  v4 = byte_140C46014 == 0;
  *a2 = 0;
  v13 = 0;
  if ( v4 )
    return 0LL;
  v8 = a1;
  v12 = &v13;
  v9 = 0;
  v11 = a2;
  sub_140799218(&v8);
  result = v13;
  if ( (v13 & 0x80000000) != 0 )
    goto LABEL_14;
  if ( !*a2 )
  {
    sub_14077572C(0LL);
    sub_140762BAC(qword_140C46278, &v8);
    sub_140775698(0LL);
    result = v13;
  }
  if ( (int)result < 0 )
    goto LABEL_14;
  if ( *a2 && a1 )
  {
    v6[0] = 0x20000;
    v7 = &word_140867F00;
    sub_140957EC8(&v8, v6);
    result = v13;
  }
  if ( (int)result < 0 )
  {
LABEL_14:
    if ( a1 )
    {
      if ( *a1 )
      {
        ExFreePoolWithTag(*a1, 0);
        result = v13;
        *a1 = 0LL;
      }
    }
  }
  return result;
}
