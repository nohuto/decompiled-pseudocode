/*
 * XREFs of ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18067A204
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180227620 (SnapFlyoutHost--InternalShutdownAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>>,std::_Iterator_base0>::operator++(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 *i; // rdx
  __int64 *v3; // r8

  v1 = *a1;
  i = (__int64 *)(*a1)[2];
  if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25) && v1 == (__int64 *)i[2]; i = (__int64 *)i[1] )
    {
      *a1 = i;
      v1 = i;
    }
  }
  else
  {
    v3 = (__int64 *)*i;
    if ( !*(_BYTE *)(*i + 25) )
    {
      do
      {
        i = v3;
        v3 = (__int64 *)*v3;
      }
      while ( !*((_BYTE *)v3 + 25) );
    }
  }
  *a1 = i;
  return a1;
}
