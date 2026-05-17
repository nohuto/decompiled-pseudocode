/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180123060
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x18006681C (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x180064720 (RtlpHpMetadataFree.c)
 */

signed __int64 __fastcall RtlpHpCustomVaCallbacksRegistrarUnregister(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *i; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h]

  v4 = a2 - 16;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(v4 + 48));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v10 = *(_QWORD *)(v4 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8LL
                       * ((37
                         * (BYTE6(v10)
                          + 37
                          * (BYTE5(v10)
                           + 37
                           * (BYTE4(v10)
                            + 37
                            * (BYTE3(v10)
                             + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                         + HIBYTE(v10)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v4 )
      {
        *i = *(_QWORD *)v4;
        --*(_DWORD *)a1;
        *(_QWORD *)v4 |= 0x8000000000000002uLL;
        break;
      }
    }
    v9 = *a3;
    RtlpHpMetadataFree(v4, &v9);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 16));
}
