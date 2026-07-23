/*
 * XREFs of sub_140562860 @ 0x140562860
 * Callers:
 *     sub_140950530 @ 0x140950530 (sub_140950530.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140562860(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const wchar_t *a4,
        char a5,
        const wchar_t *a6)
{
  __int64 v6; // rax
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // edx
  const wchar_t *v11; // rcx
  bool v12; // zf
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+40h] [rbp-48h]
  int v16; // [rsp+48h] [rbp-40h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  char *v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  const wchar_t *v20; // [rsp+60h] [rbp-28h]
  int v21; // [rsp+68h] [rbp-20h]
  int v22; // [rsp+6Ch] [rbp-1Ch]

  v6 = -1LL;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v16 = v10;
  v17 = 0;
  v18 = &a5;
  v11 = a6;
  if ( !a4 )
    a4 = L"NULL";
  v15 = a4;
  v19 = 4LL;
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v8 = 2 * v6 + 2;
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v21 = v8;
  v20 = v11;
  v22 = 0;
  return sub_1402D1760(qword_140C03910, (const EVENT_DESCRIPTOR *)qword_14003B240, a3, 4u, &v14);
}
