/*
 * XREFs of ?Release@Data_t@_bstr_t@@QEAAKXZ @ 0x18022B8BE
 * Callers:
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18031A368 (-_Free@_bstr_t@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall _bstr_t::Data_t::Release(_bstr_t::Data_t *this)
{
  unsigned __int32 v2; // edi
  OLECHAR *v3; // rcx
  void *v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 && this )
  {
    v3 = *(OLECHAR **)this;
    if ( v3 )
    {
      SysFreeString(v3);
      *(_QWORD *)this = 0LL;
    }
    v4 = (void *)*((_QWORD *)this + 1);
    if ( v4 )
    {
      operator delete[](v4);
      *((_QWORD *)this + 1) = 0LL;
    }
    operator delete(this);
  }
  return v2;
}
