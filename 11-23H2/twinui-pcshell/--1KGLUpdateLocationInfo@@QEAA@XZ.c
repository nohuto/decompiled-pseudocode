/*
 * XREFs of ??1KGLUpdateLocationInfo@@QEAA@XZ @ 0x1801A9740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KGLUpdateLocationInfo::~KGLUpdateLocationInfo(KGLUpdateLocationInfo *this)
{
  HSTRING v2; // rcx
  HSTRING v3; // rcx
  HSTRING v4; // rcx

  v2 = (HSTRING)*((_QWORD *)this + 8);
  if ( v2 )
    WindowsDeleteString(v2);
  v3 = (HSTRING)*((_QWORD *)this + 7);
  if ( v3 )
    WindowsDeleteString(v3);
  v4 = (HSTRING)*((_QWORD *)this + 6);
  if ( v4 )
    WindowsDeleteString(v4);
}
