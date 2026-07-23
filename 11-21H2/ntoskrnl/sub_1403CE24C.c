/*
 * XREFs of sub_1403CE24C @ 0x1403CE24C
 * Callers:
 *     sub_1403CE1A4 @ 0x1403CE1A4 (sub_1403CE1A4.c)
 *     sub_14052DC38 @ 0x14052DC38 (sub_14052DC38.c)
 *     sub_1405302D4 @ 0x1405302D4 (sub_1405302D4.c)
 *     sub_140530348 @ 0x140530348 (sub_140530348.c)
 *     sub_140530540 @ 0x140530540 (sub_140530540.c)
 *     sub_1405307FC @ 0x1405307FC (sub_1405307FC.c)
 *     sub_140530DE0 @ 0x140530DE0 (sub_140530DE0.c)
 *     sub_140531560 @ 0x140531560 (sub_140531560.c)
 *     sub_140532D90 @ 0x140532D90 (sub_140532D90.c)
 *     sub_14053385C @ 0x14053385C (sub_14053385C.c)
 *     sub_1405338FC @ 0x1405338FC (sub_1405338FC.c)
 *     sub_1405370FC @ 0x1405370FC (sub_1405370FC.c)
 *     sub_140537770 @ 0x140537770 (sub_140537770.c)
 *     sub_140537928 @ 0x140537928 (sub_140537928.c)
 *     sub_14053799C @ 0x14053799C (sub_14053799C.c)
 *     sub_1405381DC @ 0x1405381DC (sub_1405381DC.c)
 *     sub_140538278 @ 0x140538278 (sub_140538278.c)
 *     sub_140538748 @ 0x140538748 (sub_140538748.c)
 *     sub_1405387E8 @ 0x1405387E8 (sub_1405387E8.c)
 *     sub_140A64868 @ 0x140A64868 (sub_140A64868.c)
 * Callees:
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1403CE24C(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  void *v6; // rax

  v3 = 0;
  v4 = a2;
  if ( dword_140C54B8C )
  {
    if ( dword_140C54B8C != 1 )
    {
      *a3 = 0LL;
      return (unsigned int)-1073741670;
    }
    v6 = (void *)sub_1403B1F04(a1, a2);
  }
  else
  {
    v6 = (void *)sub_1403BF104(a2, 1u);
  }
  *a3 = v6;
  if ( !v6 )
    return (unsigned int)-1073741670;
  memset(v6, 0, v4);
  return v3;
}
