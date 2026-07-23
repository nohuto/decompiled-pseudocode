/*
 * XREFs of sub_140A30CA8 @ 0x140A30CA8
 * Callers:
 *     sub_140946E0C @ 0x140946E0C (sub_140946E0C.c)
 *     sub_140A30DE4 @ 0x140A30DE4 (sub_140A30DE4.c)
 * Callees:
 *     sub_140204630 @ 0x140204630 (sub_140204630.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 */

__int64 __fastcall sub_140A30CA8(__int64 a1, _WORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int64 v4; // rsi
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  const wchar_t *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rax
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  UnicodeString = 0LL;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = sub_1407454A8((unsigned int *)a1, (__int64)&UnicodeString, 1);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741811;
        goto LABEL_23;
      }
      v10 = 44;
    }
    else
    {
      v10 = 48;
    }
    v11 = *(const wchar_t **)(a1 + 24);
    if ( v11 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v11[v12] );
      v13 = 2 * v12;
    }
    else
    {
      v13 = 12;
    }
    v14 = v13 + UnicodeString.Length + v10;
    if ( a4 )
      *a4 = v14;
    if ( v14 > (unsigned int)v4 )
    {
      v8 = -1073741789;
    }
    else
    {
      v15 = L"(NULL)";
      v16 = L"System";
      if ( v11 )
        v15 = v11;
      if ( v9 )
        v16 = L"User";
      v8 = sub_140204630(
             a2,
             v4,
             0LL,
             0LL,
             0x800u,
             L"[(%s %3d) %s %s]",
             UnicodeString.Buffer,
             *(_DWORD *)(a1 + 16),
             v16,
             v15);
    }
  }
LABEL_23:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
