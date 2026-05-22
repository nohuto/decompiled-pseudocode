/*
 * XREFs of ??1?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAA@XZ @ 0x180041C64
 * Callers:
 *     ??_G?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x180041810 (--_G-$_Node_class@GV-$regex_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??_G?$_Buf@G@std@@QEAAPEAXI@Z @ 0x18014EFCC (--_G-$_Buf@G@std@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::~_Node_class<unsigned short,std::regex_traits<unsigned short>>(
        __int64 a1)
{
  __int64 v1; // rsi
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rsi
  void **result; // rax
  void **v7; // rbx
  void **v8; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a1 = &std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::`vftable';
  while ( v1 )
  {
    v7 = (void **)v1;
    v1 = *(_QWORD *)(v1 + 24);
    free(v7[2]);
    operator delete(v7, 0x20uLL);
  }
  operator delete(*(void **)(a1 + 40), 0x20uLL);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    std::_Buf<unsigned short>::`scalar deleting destructor'(v3);
  v4 = *(void **)(a1 + 56);
  if ( v4 )
    std::_Buf<unsigned short>::`scalar deleting destructor'(v4);
  v5 = *(_QWORD *)(a1 + 72);
  while ( v5 )
  {
    v8 = (void **)v5;
    v5 = *(_QWORD *)(v5 + 24);
    free(v8[2]);
    operator delete(v8, 0x20uLL);
  }
  result = &std::_Node_endif::`vftable';
  *(_QWORD *)a1 = &std::_Node_endif::`vftable';
  return result;
}
