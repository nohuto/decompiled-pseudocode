/*
 * XREFs of sub_1402D708C @ 0x1402D708C
 * Callers:
 *     sub_140206200 @ 0x140206200 (sub_140206200.c)
 *     sub_1402D6FB0 @ 0x1402D6FB0 (sub_1402D6FB0.c)
 *     LdrResSearchResource @ 0x140673120 (LdrResSearchResource.c)
 * Callees:
 *     sub_1402D72FC @ 0x1402D72FC (sub_1402D72FC.c)
 *     sub_1402D7504 @ 0x1402D7504 (sub_1402D7504.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     sub_1403D525C @ 0x1403D525C (sub_1403D525C.c)
 *     sub_1403D79F4 @ 0x1403D79F4 (sub_1403D79F4.c)
 *     sub_1403D7C1C @ 0x1403D7C1C (sub_1403D7C1C.c)
 *     sub_1403DA094 @ 0x1403DA094 (sub_1403DA094.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmUnmapViewInSystemSpace @ 0x1406DF130 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall sub_1402D708C(__int64 a1, unsigned __int16 a2, _QWORD *a3, __int64 *a4, int a5)
{
  int v7; // r13d
  unsigned __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // edi
  const wchar_t *v14; // r8
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // rsi
  PVOID MappedBase; // [rsp+40h] [rbp-348h] BYREF
  __int64 v19; // [rsp+48h] [rbp-340h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-338h] BYREF
  int v21; // [rsp+58h] [rbp-330h]
  __int128 v22; // [rsp+60h] [rbp-328h] BYREF
  __int64 v23; // [rsp+78h] [rbp-310h]
  _BYTE v24[176]; // [rsp+80h] [rbp-308h] BYREF
  char v25; // [rsp+130h] [rbp-258h] BYREF

  v7 = a2;
  MappedBase = 0LL;
  Handle = 0LL;
  v22 = 0LL;
  memset(v24, 0, 0xAAuLL);
  v19 = 0LL;
  if ( !a1 || !(_WORD)v7 || !a3 )
    return 3221225485LL;
  v9 = sub_1402D72FC(a1, (unsigned __int16)v7, &v19, 4LL);
  if ( v9 == -1LL )
  {
    *a3 = 0LL;
    return 3221946374LL;
  }
  if ( v9 )
  {
    *a3 = v9;
    if ( a4 )
      *a4 = v19;
    v21 = 0;
    return 0LL;
  }
  v11 = sub_1402D7504(a1);
  v23 = v11;
  if ( v11 )
  {
    *((_QWORD *)&v22 + 1) = &v25;
    LODWORD(v22) = 34078720;
    v13 = a5 & 0x1000000;
    if ( (a5 & 0x1000000) != 0 )
    {
LABEL_14:
      v14 = L".mun";
      if ( !v13 )
        v14 = L".mui";
      LOBYTE(v12) = v13 != 0;
      v15 = sub_1403D7C1C(v11, v12, v14, v24, &v22);
      if ( v15 >= 0 )
      {
        v15 = sub_1403D79F4(a1, (unsigned int)&v22, (unsigned int)&Handle, (unsigned int)&MappedBase, (__int64)&v19);
        if ( v15 >= 0 )
        {
          v9 = (unsigned __int64)MappedBase | 1;
          if ( !(unsigned __int8)sub_1403DA094(a1, (unsigned __int64)MappedBase | 1, v16, v24, a5) )
          {
            MmUnmapViewInSystemSpace(MappedBase);
            ZwClose(Handle);
            Handle = 0LL;
            v9 = 0LL;
            v15 = -1073020926;
          }
        }
      }
      goto LABEL_20;
    }
    if ( (unsigned int)sub_140372644((unsigned __int16)v7, v24, 85LL) )
    {
      v11 = v23;
      goto LABEL_14;
    }
    DbgPrintEx(0x55u, 1u, "LDR: No Locale name for LangId %d \n", v7);
  }
  v15 = -1073020927;
LABEL_20:
  if ( !v9 )
    v9 = -1LL;
  MappedBase = (PVOID)v9;
  v17 = v19;
  sub_1403D525C(a1, (unsigned int)&MappedBase, (unsigned int)&Handle, 0, v7, 1, v15, v19);
  if ( MappedBase == (PVOID)-1LL )
  {
    *a3 = 0LL;
  }
  else
  {
    *a3 = MappedBase;
    if ( a4 )
      *a4 = v17;
    return 0;
  }
  return (unsigned int)v15;
}
