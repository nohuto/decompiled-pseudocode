/*
 * XREFs of SepSetTokenSessionById @ 0x140672524
 * Callers:
 *     SepGetAnonymousToken @ 0x14021F764 (SepGetAnonymousToken.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x1407530D0 (SeSetSessionIdToken.c)
 *     SepFilterToken @ 0x14078E3F0 (SepFilterToken.c)
 *     SeExchangePrimaryToken @ 0x140847260 (SeExchangePrimaryToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1402DF7D8 (MmGetSessionObjectById.c)
 */

void __fastcall SepSetTokenSessionById(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // edi
  void *v7; // rcx

  v5 = a2;
  if ( *(_DWORD *)(a1 + 120) != (_DWORD)a2 )
  {
    *(_DWORD *)(a1 + 120) = a2;
    if ( !SeTokenDoesNotTrackSessionObject )
    {
      if ( (_BYTE)a3 )
      {
        if ( a5 )
          *a5 = *(_QWORD *)(a1 + 1160);
        *(_QWORD *)(a1 + 1160) = a4;
      }
      else
      {
        v7 = *(void **)(a1 + 1160);
        if ( v7 )
          ObfDereferenceObject(v7);
        *(_QWORD *)(a1 + 1160) = MmGetSessionObjectById(v5, a2, a3, a4);
      }
    }
  }
}
