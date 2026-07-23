/*
 * XREFs of MiConvertPrivateToProto @ 0x1402175A8
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 * Callees:
 *     MiCreateCombineAnchor @ 0x14021503C (MiCreateCombineAnchor.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiDecrementCombinedPteEx @ 0x1402F3DA8 (MiDecrementCombinedPteEx.c)
 */

__int64 __fastcall MiConvertPrivateToProto(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v4 = a1[14];
  v7 = MiCreateCombineAnchor(a1, a2, &v12);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 == -1073741302 )
    {
      v9 = a3;
      v10 = v12;
      v8 = MiCombineWithExisting(a1, a2, v12, v9);
      if ( v8 < 0 )
        MiDecrementCombinedPteEx(v4, v10 + 32, 0LL);
    }
  }
  else
  {
    return (unsigned int)MiCombineInitialInstance(a1, a2, a3);
  }
  return (unsigned int)v8;
}
