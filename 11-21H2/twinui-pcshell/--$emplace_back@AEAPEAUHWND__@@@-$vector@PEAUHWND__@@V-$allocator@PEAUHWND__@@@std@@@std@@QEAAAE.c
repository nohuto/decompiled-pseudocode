/*
 * XREFs of ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@AEAPEAU2@@Z @ 0x18049BAA8
 * Callers:
 *     _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x18049BC60 (_lambda_cab7c03a2b5ac7190be81e45414ea272_--operator().c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<HWND__ *>::emplace_back<HWND__ * &>(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<HWND__ *>::_Emplace_reallocate<HWND__ * &>((const void **)a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
