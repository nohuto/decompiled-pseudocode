/*
 * XREFs of sub_14051E7B4 @ 0x14051E7B4
 * Callers:
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14051E7B4(int a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned int v4; // ebx
  int v5; // esi
  __int64 v6; // rdx
  int v7; // r11d

  v2 = 0;
  if ( qword_140C4AD18 )
  {
    result = *(_QWORD *)(qword_140C4AD18 + 24);
    v4 = *(_DWORD *)(qword_140C4AD18 + 60);
    v5 = *(_DWORD *)(result + 4LL * a2);
    v6 = 2048LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(*(_QWORD *)qword_140C4AD18 + 4LL * v2);
        if ( v7 == a1 )
          break;
        result = *(_QWORD *)(qword_140C4AD18 + 16);
        if ( *(_DWORD *)(result + 4LL * v2) == v5 && v7 == -1 )
          v6 = v2;
        if ( ++v2 >= v4 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      result = qword_140C4AD18;
      *(_DWORD *)(*(_QWORD *)qword_140C4AD18 + 4 * v6) = a1;
    }
  }
  return result;
}
