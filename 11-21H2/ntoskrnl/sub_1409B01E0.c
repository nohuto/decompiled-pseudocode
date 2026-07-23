/*
 * XREFs of sub_1409B01E0 @ 0x1409B01E0
 * Callers:
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 * Callees:
 *     sub_1402075A4 @ 0x1402075A4 (sub_1402075A4.c)
 *     sub_140208434 @ 0x140208434 (sub_140208434.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14059973C @ 0x14059973C (sub_14059973C.c)
 *     sub_14070F320 @ 0x14070F320 (sub_14070F320.c)
 */

LONG_PTR __fastcall sub_1409B01E0(__int64 a1, __int64 a2, int a3)
{
  LONG_PTR result; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // r8d
  void *v8; // rsi
  void *v9; // rcx

  result = (unsigned int)(a3 - 1);
  if ( (result & 0xFFFFFFFD) == 0 )
  {
    v5 = sub_14070F320(a2);
    result = sub_14059973C(v6);
    v8 = (void *)result;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 1200LL) || *(_QWORD *)(a1 + 1208) == v5 )
    {
      if ( v7 == 1 )
      {
        result = *(_QWORD *)(a1 + 1272);
        if ( result == a1 && *(_QWORD *)(a1 + 1200) && !*(_DWORD *)(a1 + 216) && *(void **)(a1 + 1304) != v8 )
        {
          sub_1402075A4(*(unsigned __int16 **)(a1 + 1208));
          sub_140208434(*(_QWORD *)(a1 + 1200) + 128LL, *(_QWORD *)(*(_QWORD *)(a1 + 1200) + 128LL), v5);
          v9 = *(void **)(a1 + 1304);
          if ( v9 )
            ObfDereferenceObjectWithTag(v9, 0x624A7350u);
          *(_QWORD *)(a1 + 1304) = v8;
          return ObfReferenceObjectWithTag(v8, 0x624A7350u);
        }
      }
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 1208LL) != v5 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1272) + 1208LL) = v5;
        result = *(_QWORD *)(a1 + 1272);
        *(_QWORD *)(result + 1304) = v8;
      }
      *(_QWORD *)(a1 + 1208) = v5;
    }
  }
  return result;
}
