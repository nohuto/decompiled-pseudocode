/*
 * XREFs of RtlGetAce @ 0x1402A4750
 * Callers:
 *     sub_140257C7C @ 0x140257C7C (sub_140257C7C.c)
 *     sub_14041A13C @ 0x14041A13C (sub_14041A13C.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_140724550 @ 0x140724550 (sub_140724550.c)
 *     sub_1407F8298 @ 0x1407F8298 (sub_1407F8298.c)
 *     sub_140801A80 @ 0x140801A80 (sub_140801A80.c)
 *     sub_14082C74C @ 0x14082C74C (sub_14082C74C.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v4; // r9
  ULONG v5; // r8d

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = Acl + 1;
    *Ace = &Acl[1];
    v5 = 0;
    if ( AceIndex )
    {
      while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        ++v5;
        v4 = (PACL)((char *)v4 + v4->AclSize);
        *Ace = v4;
        if ( v5 >= AceIndex )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
