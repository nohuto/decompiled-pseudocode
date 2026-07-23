/*
 * XREFs of sub_140924648 @ 0x140924648
 * Callers:
 *     sub_14068D2B8 @ 0x14068D2B8 (sub_14068D2B8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068B144 @ 0x14068B144 (sub_14068B144.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 */

__int64 __fastcall sub_140924648(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdi
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rsi

  v3 = (unsigned int)a2;
  v5 = 0;
  if ( sub_14068B144((unsigned int)a2, a2) )
  {
    v6 = (void *)sub_140829CBC(v3, -1, 0LL, 0);
    v7 = v6;
    if ( v6 )
    {
      memset(v6, 0, v3);
      *a3 = v7;
    }
    else
    {
      v5 = -1073741670;
      sub_14079CF18(v3);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
