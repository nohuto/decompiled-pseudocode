/*
 * XREFs of ?IsAnimationNameValid@@YA_NPEBG_N@Z @ 0x18004C550
 * Callers:
 *     ??$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBM@Z @ 0x18004C620 (--$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAA.c)
 *     ?ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z @ 0x18005BCC4 (-ValidateKey@CompositionAnimation@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z @ 0x18006F4E8 (-IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z.c)
 *     ??$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076714 (--$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composi.c)
 * Callees:
 *     <none>
 */

char __fastcall IsAnimationNameValid(const unsigned __int16 *a1, char a2)
{
  size_t v4; // r9
  char v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r10
  int v10; // edx

  if ( a1 )
  {
    v4 = wcsnlen(a1, 0x104uLL);
    if ( v4 - 1 <= 0x102 )
    {
      v6 = *a1;
      v5 = 1;
      LOWORD(v6) = v6 - 65;
      if ( (unsigned __int16)v6 <= 0x39u )
      {
        v7 = 0x3FFFFFF43FFFFFFLL;
        if ( _bittest64(&v7, v6) )
        {
          v8 = 1LL;
          if ( v4 <= 1 )
            return v5;
          v9 = 0x87FFFFFE03FFLL;
          while ( 1 )
          {
            v10 = a1[v8];
            if ( ((unsigned __int16)(v10 - 48) > 0x2Fu || !_bittest64(&v9, (unsigned int)(v10 - 48)))
              && (unsigned __int16)(v10 - 97) > 0x19u
              && (!a2 || (_WORD)v10 != 46) )
            {
              break;
            }
            if ( ++v8 >= v4 )
              return v5;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}
