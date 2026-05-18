/*
 * XREFs of ?push_back@?$vector@GV?$allocator@G@std@@@std@@QEAAX$$QEAG@Z @ 0x18008D5B4
 * Callers:
 *     ?CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA?AV?$shared_ptr@VMesh@Engine@Spectre@@@std@@PEAV223@MM_NI1@Z @ 0x18008CFFC (-CreatePlaneTriangleStrip@MeshHelper@Engine@Spectre@@SA-AV-$shared_ptr@VMesh@Engine@Spectre@@@st.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<unsigned short>::push_back(__int64 *a1, _WORD *a2)
{
  _WORD *v3; // rdx
  char *result; // rax

  v3 = (_WORD *)a1[1];
  if ( v3 == (_WORD *)a1[2] )
    return std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(a1, (__int64)v3, a2);
  result = (char *)(unsigned __int16)*a2;
  *v3 = (_WORD)result;
  a1[1] += 2LL;
  return result;
}
