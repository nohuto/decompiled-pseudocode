/*
 * XREFs of ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400283C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessNode::GetLeftFormat(CProcessNode *this, struct IAudioMediaType **a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( a2 )
  {
    *a2 = (struct IAudioMediaType *)*((_QWORD *)this + 1);
    v3 = *((_QWORD *)this + 1);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
