/*
 * XREFs of ?HrFindInterface@CPresentationSurface@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AFEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x18002B6E8 (--8@YA_NAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall CPresentationSurface::HrFindInterface(CPresentationSurface *this, struct _GUID *a2, void **a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r10d
  _QWORD *v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // r9

  if ( operator==(a2, &GUID_956710fb_ea40_4eba_a3eb_4375a0eb4edc)
    || operator==(v3, &GUID_5668bb79_3d8e_415c_b215_f38020f2d252) )
  {
    *v4 = v5;
  }
  else if ( operator==(v7, &GUID_2bfd280a_9471_4cf1_8d64_c33722820711) )
  {
    *v8 = (v9 + 32) & -(__int64)(v9 != 0);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v6;
}
