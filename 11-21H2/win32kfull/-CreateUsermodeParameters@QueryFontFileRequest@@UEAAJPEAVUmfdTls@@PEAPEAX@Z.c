/*
 * XREFs of ?CreateUsermodeParameters@QueryFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C380
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C000CB7C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryFontFileRequest::CreateUsermodeParameters(
        QueryFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  char v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // edx
  _DWORD *v13; // rax

  v6 = *((_DWORD *)this + 13);
  v7 = v6 + 7;
  if ( v6 + 7 < v6 )
  {
    v7 = -1;
    v8 = -2147024362;
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 1;
  }
  v10 = v7 & 0xFFFFFFF8;
  v11 = 0;
  if ( v8 >= 0 )
    v11 = v10;
  if ( !v9 )
    return 3221225495LL;
  v12 = v11 + 32;
  if ( v12 < 0x20 )
    return 3221225495LL;
  v13 = UmfdTls::CommitUMBuffer(a2, v12, 1);
  if ( !v13 )
    return 3221225495LL;
  if ( *((_QWORD *)this + 7) )
    *((_QWORD *)this + 9) = v13 + 8;
  *(_QWORD *)v13 = **((_QWORD **)this + 5);
  v13[2] = *((_DWORD *)this + 12);
  v13[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v13 + 2) = *((_QWORD *)this + 9);
  *a3 = v13;
  return 0LL;
}
