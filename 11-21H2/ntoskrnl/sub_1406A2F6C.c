/*
 * XREFs of sub_1406A2F6C @ 0x1406A2F6C
 * Callers:
 *     sub_1406A2E40 @ 0x1406A2E40 (sub_1406A2E40.c)
 * Callees:
 *     sub_14022B210 @ 0x14022B210 (sub_14022B210.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140659E0C @ 0x140659E0C (sub_140659E0C.c)
 */

__int64 __fastcall sub_1406A2F6C(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // rbp
  int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 *v10; // r13
  __int64 v11; // r14
  _QWORD *v12; // rdi
  wchar_t *v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+88h] [rbp+10h] BYREF
  __int64 v19; // [rsp+98h] [rbp+20h]

  if ( a2 && a3 && (v6 = (unsigned __int64)a2 + a3, v6 >= (unsigned __int64)a2) )
  {
    memset(a2, 0, a3);
    if ( (unsigned __int64)(a2 + 12) > v6 )
    {
LABEL_5:
      v7 = -2147483643;
      goto LABEL_17;
    }
    *a2 = 0;
    a2[6] = 0;
    *((_QWORD *)a2 + 5) = a2 + 8;
    *((_QWORD *)a2 + 4) = a2 + 8;
    *((_QWORD *)a2 + 2) = a2 + 2;
    *((_QWORD *)a2 + 1) = a2 + 2;
    v8 = 112LL * *a1;
    if ( v8 > 0xFFFFFFFF )
    {
      v7 = -1073741675;
    }
    else
    {
      v7 = 0;
      v9 = (unsigned __int64)a2 + (unsigned int)v8 + 48;
      if ( v9 > v6 )
        goto LABEL_5;
      v10 = (__int64 *)(a1 + 2);
      v11 = *v10;
      if ( (__int64 *)*v10 == v10 )
        return (unsigned int)v7;
      v12 = a2 + 38;
      while ( 1 )
      {
        v7 = sub_140659E0C((unsigned __int64)(a2 + 2), v12 - 13);
        if ( v7 < 0 )
          break;
        ++*a2;
        *((_WORD *)v12 - 28) = *(_WORD *)(v11 + 48);
        v13 = (wchar_t *)((v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
        *((_DWORD *)v12 - 13) = *(_DWORD *)(v11 + 52);
        *(v12 - 3) = v12 - 4;
        *(v12 - 4) = v12 - 4;
        *(v12 - 6) = 0LL;
        *((_DWORD *)v12 - 10) = 0;
        *((_DWORD *)v12 - 4) = 0;
        *v12 = v12 - 1;
        *(v12 - 1) = v12 - 1;
        v14 = *(unsigned __int16 *)(v11 + 32);
        v19 = v14;
        v18 = v14;
        if ( (unsigned __int64)v13 + v14 > v6 )
          goto LABEL_5;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.MaximumLength = v14;
        DestinationString.Buffer = v13;
        RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v11 + 32));
        v15 = (unsigned __int64)v13 + v19;
        *(UNICODE_STRING *)(v12 - 9) = DestinationString;
        v7 = sub_14022B210(v11, (__int64)(v12 - 13), v15, (int)v6 - (int)v15, &v18);
        if ( v7 < 0 )
          break;
        v12 += 14;
        v11 = *(_QWORD *)v11;
        v9 = v18 + v15;
        if ( (__int64 *)v11 == v10 )
          return (unsigned int)v7;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_17:
  if ( a3 >= 0x30 )
  {
    *(_OWORD *)a2 = 0LL;
    *((_OWORD *)a2 + 1) = 0LL;
    *((_OWORD *)a2 + 2) = 0LL;
  }
  return (unsigned int)v7;
}
