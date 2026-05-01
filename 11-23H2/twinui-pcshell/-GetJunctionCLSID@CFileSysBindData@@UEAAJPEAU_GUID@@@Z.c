/*
 * XREFs of ?GetJunctionCLSID@CFileSysBindData@@UEAAJPEAU_GUID@@@Z @ 0x180755AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFileSysBindData::GetJunctionCLSID(CFileSysBindData *this, struct _GUID *a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  GUID v5; // xmm0

  v3 = 0x42589D70FC0A77E6LL - *((_QWORD *)this + 3);
  if ( *((_QWORD *)this + 3) == 0x42589D70FC0A77E6LL )
    v3 = 0x1EE30F1DAB6D8397LL - *((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    v5 = *(GUID *)((char *)this + 24);
  }
  else
  {
    v5 = GUID_NULL;
    v4 = -2147467259;
  }
  *a2 = v5;
  return v4;
}
