/*
 * XREFs of sub_1406F0FCC @ 0x1406F0FCC
 * Callers:
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     sub_14062CAEC @ 0x14062CAEC (sub_14062CAEC.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406F0FCC(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4, char a5)
{
  __int64 v5; // r12
  char v8; // r15
  char v9; // r13
  __int64 Length; // rax
  __int64 v11; // r10
  unsigned __int16 *v12; // rdi
  unsigned int v13; // esi
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rax
  wchar_t *Pool2; // rax
  const WCHAR *v18; // rsi
  const WCHAR *v19; // r9
  const WCHAR *v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned __int16 *v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  v5 = 0LL;
  v26 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = a2->Length;
  v11 = a3 != 0 ? 8 : 0;
  v12 = 0LL;
  v13 = 0;
  if ( a1 )
  {
    v8 = 1;
    v14 = Length + v11 + 2 + *a4;
  }
  else
  {
    v14 = Length + v11 + 2;
  }
  if ( !wcsnicmp(a2->Buffer, L"%SystemRoot%", 0xCuLL) )
  {
    if ( a2->Length == 24 )
    {
      v9 = 1;
      v16 = *a4 + 54LL;
    }
    else
    {
      if ( a2->Buffer[((unsigned __int64)a2->Length >> 1) - 1] != 92 )
      {
LABEL_15:
        v12 = (unsigned __int16 *)((char *)sub_140347DB0() + 1264);
LABEL_16:
        v5 = 12LL;
        v14 += *v12 - 24LL;
        goto LABEL_6;
      }
      v16 = *a4;
      v8 = 1;
    }
    v14 += v16;
    goto LABEL_15;
  }
  if ( a5 && !wcsnicmp(a2->Buffer, L"%DriverData%", 0xCuLL) )
  {
    result = sub_14062CAEC(&v26);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v12 = v26;
    goto LABEL_16;
  }
LABEL_6:
  if ( !v27 && !v8 && !v12 )
    return v13;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v14, 1350005829LL);
  v18 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  if ( v9 )
  {
    v21 = sub_1402E1280(
            Pool2,
            v14,
            L"%ws%ws%ws%ws",
            *((_QWORD *)v12 + 1),
            L"\\system32\\Logfiles\\WMI\\",
            *((_QWORD *)a4 + 1),
            L".etl");
  }
  else
  {
    v19 = &word_140867F00;
    if ( v8 )
      v20 = (const WCHAR *)*((_QWORD *)a4 + 1);
    else
      v20 = &word_140867F00;
    if ( v12 )
      v19 = (const WCHAR *)*((_QWORD *)v12 + 1);
    v21 = sub_1402E1280(Pool2, v14, L"%ws%ws%ws", v19, &a2->Buffer[v5], v20);
  }
  v22 = v21;
  if ( v27 )
  {
    v23 = -1LL;
    v24 = -1LL;
    do
      ++v24;
    while ( v18[v24] );
    v25 = v14 - 2 * v24;
    do
      ++v23;
    while ( v18[v23] );
    v22 = sub_1402E1280((wchar_t *)&v18[v23], v25, L".%03d", v27);
  }
  RtlFreeUnicodeString(a2);
  RtlInitUnicodeString(a2, v18);
  return v22;
}
