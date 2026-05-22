/*
 * XREFs of ?OnCollectionChanged@CompositionShapeCollection@Composition@UI@Windows@@UEAAXXZ @ 0x180080680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionShapeCollection::OnCollectionChanged(
        Windows::UI::Composition::CompositionShapeCollection *this)
{
  __int64 v1; // rbx
  char v2; // al
  _QWORD *v3; // rdi
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    v2 = *(_BYTE *)(v1 + 16);
    if ( (v2 & 1) == 0 )
    {
      v3 = *(_QWORD **)(v1 + 24);
      *(_BYTE *)(v1 + 16) = v2 | 1;
      v4 = v3[12];
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1) )
      {
        *(_QWORD *)(v1 + 8) = v3[60];
        v3[60] = v1;
      }
      else
      {
        *(_QWORD *)(v1 + 8) = v3[59];
        v3[59] = v1;
      }
    }
  }
}
