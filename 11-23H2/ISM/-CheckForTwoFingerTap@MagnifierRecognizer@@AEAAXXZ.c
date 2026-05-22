/*
 * XREFs of ?CheckForTwoFingerTap@MagnifierRecognizer@@AEAAXXZ @ 0x1801CE840
 * Callers:
 *     ?OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801CE1B0 (-OnInput@MagnifierProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801CE640 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 */

void __fastcall MagnifierRecognizer::CheckForTwoFingerTap(MagnifierRecognizer *this)
{
  char v1; // r11
  MagnifierRecognizer *v2; // r10
  int v3; // ecx
  int v4; // ecx
  __int64 *v5; // rcx
  _QWORD *v6; // rcx
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = this;
  if ( !*(_BYTE *)this || *((_BYTE *)this + 1) )
    return;
  v3 = *((_DWORD *)this + 1);
  if ( !v3 )
  {
    if ( *((_DWORD *)v2 + 2) == 2 )
      *((_BYTE *)v2 + 1) = 1;
    goto LABEL_17;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( *((_DWORD *)v2 + 2) != 1 )
      return;
    v6 = (_QWORD *)**((_QWORD **)v2 + 2);
    if ( 1000000LL * *((_QWORD *)v2 + 5) < v6[8] - v6[7] )
      *(_BYTE *)v2 = 0;
    if ( (int)((v6[6] - v6[5]) * (v6[6] - v6[5]) + (HIDWORD(v6[6]) - HIDWORD(v6[5])) * (HIDWORD(v6[6]) - HIDWORD(v6[5]))) < (unsigned __int64)(unsigned int)(*((_DWORD *)v2 + 12) * *((_DWORD *)v2 + 12)) )
      return;
LABEL_17:
    *(_BYTE *)v2 = v1;
    return;
  }
  if ( v4 != 1 )
    goto LABEL_17;
  v5 = (__int64 *)**((_QWORD **)v2 + 2);
  v7 = v5;
  while ( *((_BYTE *)v5 + 25) == v1 )
  {
    if ( (int)((v5[6] - v5[5]) * (v5[6] - v5[5]) + (HIDWORD(v5[6]) - HIDWORD(v5[5])) * (HIDWORD(v5[6]) - HIDWORD(v5[5]))) >= (unsigned __int64)(unsigned int)(*((_DWORD *)v2 + 13) * *((_DWORD *)v2 + 13)) )
      goto LABEL_17;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++(&v7);
    v5 = v7;
  }
}
