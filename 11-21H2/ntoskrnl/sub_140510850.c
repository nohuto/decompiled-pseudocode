/*
 * XREFs of sub_140510850 @ 0x140510850
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405107FC @ 0x1405107FC (sub_1405107FC.c)
 *     sub_14051A094 @ 0x14051A094 (sub_14051A094.c)
 *     sub_14051A18C @ 0x14051A18C (sub_14051A18C.c)
 */

__int64 __fastcall sub_140510850(unsigned int a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // edx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-E8h] BYREF
  WCHAR SourceString[80]; // [rsp+40h] [rbp-D8h] BYREF

  DestinationString = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( a1 >= dword_140C4BF48 )
    return 3221225485LL;
  v7 = qword_140C4BF40 + ((unsigned __int64)a1 << 6);
  if ( !*(_BYTE *)v7 )
    return 3221225485LL;
  v8 = v7 + 32;
  v9 = *(_QWORD *)(v7 + 32);
  if ( v9 == v7 + 32 )
  {
LABEL_16:
    v9 = sub_1403BF104(40, 1u);
    if ( !v9 )
      return 3221225495LL;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 4);
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 24);
      if ( *(_DWORD *)(v11 + 4) == v10
        && *(_WORD *)(v11 + 12) == *(_WORD *)(a2 + 12)
        && *(_DWORD *)(v11 + 8) == *(_DWORD *)(a2 + 8)
        && *(_WORD *)(v11 + 14) == *(_WORD *)(a2 + 14)
        && *(_WORD *)(v11 + 16) == *(_WORD *)(a2 + 16)
        && *(_WORD *)(v11 + 18) == *(_WORD *)(a2 + 18)
        && *(_DWORD *)(v9 + 36) == *(_DWORD *)(a3 + 8) )
      {
        break;
      }
      v9 = *(_QWORD *)v9;
      if ( v9 == v8 )
        goto LABEL_16;
    }
    if ( *(int *)(v9 + 16) >= 0 )
      KeBugCheckEx(0x5Cu, 0x300uLL, v9, a2, *(unsigned int *)(a3 + 8));
    v13 = *(_QWORD *)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v14 = *(__int64 **)(v9 + 8), *v14 != v9) )
LABEL_24:
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
  }
  *(_QWORD *)(v9 + 24) = a2;
  *(_WORD *)(v9 + 32) = *(_WORD *)(a3 + 4);
  *(_WORD *)(v9 + 34) = *(_WORD *)(a3 + 6);
  *(_DWORD *)(v9 + 36) = *(_DWORD *)(a3 + 8);
  v15 = *(__int64 **)(v8 + 8);
  if ( *v15 != v8 )
    goto LABEL_24;
  *(_QWORD *)v9 = v8;
  *(_QWORD *)(v9 + 8) = v15;
  *v15 = v9;
  *(_QWORD *)(v8 + 8) = v9;
  RtlInitUnicodeString(&DestinationString, L"Unknown Resource");
  if ( (int)sub_1405107FC(v9, v16, SourceString) >= 0 )
    RtlInitUnicodeString(&DestinationString, SourceString);
  v17 = *(_DWORD *)(a3 + 4);
  if ( v17 == 3 )
  {
    result = sub_14051A094(a4);
  }
  else if ( v17 == 65539 )
  {
    result = sub_14051A18C(a4, &DestinationString);
  }
  else
  {
    result = 3221225474LL;
  }
  *(_DWORD *)(v9 + 16) = result;
  return result;
}
