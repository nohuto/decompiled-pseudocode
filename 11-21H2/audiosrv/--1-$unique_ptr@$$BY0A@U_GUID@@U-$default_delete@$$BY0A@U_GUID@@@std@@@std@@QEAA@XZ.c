/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800E3B28
 * Callers:
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$2 @ 0x1800E437C (_CAudioStream--GetAudioEffects_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
