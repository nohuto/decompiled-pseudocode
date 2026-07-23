/*
 * XREFs of MiGetVadForHotPatchInProgress @ 0x140A375BC
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     MiVadDeleted @ 0x1402756A0 (MiVadDeleted.c)
 *     MiSetVadFlags @ 0x140287940 (MiSetVadFlags.c)
 *     MiImageVadHotPatchEligible @ 0x1407BA950 (MiImageVadHotPatchEligible.c)
 */

__int64 __fastcall MiGetVadForHotPatchInProgress(unsigned __int64 a1, int a2, __int64 *a3, int *a4)
{
  unsigned int v4; // ebx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // esi
  bool v13; // zf
  unsigned int v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a3 = 0LL;
  v15 = 0;
  v9 = MiObtainReferencedVadEx(a1, 0, (int *)&v15);
  v10 = (__int64)v9;
  if ( !v9 )
    return v15;
  if ( (v9[6] & 0x70) != 0x20 || (unsigned int)MiVadDeleted((__int64)v9) )
    goto LABEL_3;
  if ( !(unsigned int)MiImageVadHotPatchEligible(v11) )
  {
    v4 = -1073741637;
    goto LABEL_16;
  }
  if ( a1 == (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12 )
  {
    v12 = (*(_DWORD *)(v10 + 48) >> 23) & 3;
    if ( v12 == 1 )
    {
      v4 = -1073740682;
    }
    else
    {
      if ( !v12 || (a2 ? (v13 = v12 == 3) : (v13 = v12 == 2), v13) )
      {
        MiSetVadFlags(v10, 4LL, 1);
        *a4 = v12;
        *a3 = v10;
        return v4;
      }
      v4 = -1073700861;
    }
  }
  else
  {
LABEL_3:
    v4 = -1073741800;
  }
LABEL_16:
  MiUnlockAndDereferenceVad((char *)v10);
  return v4;
}
