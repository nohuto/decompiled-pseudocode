/*
 * XREFs of sub_1409EB5B4 @ 0x1409EB5B4
 * Callers:
 *     sub_140814360 @ 0x140814360 (sub_140814360.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1409EB5B4(__int64 a1, char a2, char a3)
{
  unsigned __int16 v3; // si
  unsigned __int16 *v6; // rcx
  unsigned int v7; // eax
  __int16 *v8; // rdi
  __int64 v9; // r15
  unsigned int v10; // r14d
  const WCHAR *v11; // rcx
  const WCHAR *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // [rsp+58h] [rbp-9h] BYREF
  int v17; // [rsp+60h] [rbp-1h]
  _QWORD v18[3]; // [rsp+68h] [rbp+7h] BYREF
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]

  v16 = 0LL;
  v17 = 0;
  v3 = 3914 - (a2 != 0);
  if ( a3 )
  {
    v6 = word_140C16300;
    v7 = 1;
  }
  else
  {
    KeWaitForSingleObject(&stru_140C160E0, Executive, 0, 0, 0LL);
    v7 = dword_140C16460;
    v6 = (unsigned __int16 *)qword_140C16468;
    if ( !dword_140C16460 )
    {
LABEL_14:
      KeReleaseMutex(&stru_140C160E0, 0);
      return;
    }
  }
  v8 = (__int16 *)(v6 + 172);
  v9 = v7;
  do
  {
    v10 = *v8;
    if ( (int)sub_14042A5E0(1LL, 24LL) < 0 )
      v11 = L"Unknown";
    else
      v11 = 0LL;
    v12 = L"Unknown";
    v17 = 0;
    v16 = v10;
    if ( v11 )
      v12 = v11;
    v18[0] = &v16;
    v13 = -1LL;
    v18[1] = 12LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = *(_DWORD *)a1;
    v18[2] = v12;
    v15 = *(_QWORD *)(a1 + 1096);
    v19 = 2 * v13 + 2;
    v20 = 0;
    sub_1402AB170((__int64)v18, v15, v14, 2u, v3, 0x401903u);
    v8 += 176;
    --v9;
  }
  while ( v9 );
  if ( !a3 )
    goto LABEL_14;
}
