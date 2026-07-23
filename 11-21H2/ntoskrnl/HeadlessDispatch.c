/*
 * XREFs of HeadlessDispatch @ 0x1403C2310
 * Callers:
 *     sub_140551414 @ 0x140551414 (sub_140551414.c)
 *     sub_1405518C0 @ 0x1405518C0 (sub_1405518C0.c)
 *     sub_140551B80 @ 0x140551B80 (sub_140551B80.c)
 *     sub_140551BE0 @ 0x140551BE0 (sub_140551BE0.c)
 *     sub_1405672C0 @ 0x1405672C0 (sub_1405672C0.c)
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 *     sub_140567D6C @ 0x140567D6C (sub_140567D6C.c)
 *     sub_140829EEC @ 0x140829EEC (sub_140829EEC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AA8ED0 @ 0x140AA8ED0 (sub_140AA8ED0.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !qword_140D01468 || !qword_140D01468[1] )
  {
    if ( (_DWORD)a1 == 21 || (_DWORD)a1 == 1 )
      return 3221225473LL;
    if ( (unsigned int)a1 <= 0x10 )
    {
      v6 = 79876;
      if ( _bittest(&v6, a1) )
      {
        if ( !a4 || !a5 )
          return 3221225485LL;
        memset(a4, 0, *a5);
      }
    }
    return 0LL;
  }
  return sub_140AA8ED0(a1);
}
