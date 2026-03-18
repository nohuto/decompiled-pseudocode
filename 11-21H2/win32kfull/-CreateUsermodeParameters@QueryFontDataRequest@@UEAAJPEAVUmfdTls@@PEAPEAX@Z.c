/*
 * XREFs of ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C000CB7C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C000CC80 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall QueryFontDataRequest::CreateUsermodeParameters(
        QueryFontDataRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // ecx
  __int64 v10; // r14
  int v11; // eax
  int v12; // edx
  char v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  const void *v20; // rdx
  int v22; // ecx
  int v23; // ecx

  v6 = *((_QWORD *)this + 9);
  v7 = 0LL;
  if ( v6 )
  {
    v22 = *((_DWORD *)this + 12) - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == 1 )
          *((_DWORD *)this + 20) = 124;
      }
      else
      {
        *((_QWORD *)a2 + 6) = v6;
        *((_DWORD *)this + 20) = 8;
      }
    }
    else if ( *((_DWORD *)this + 20) )
    {
      return 3221225659LL;
    }
    v8 = *((_DWORD *)this + 20);
  }
  else
  {
    *((_DWORD *)this + 20) = 0;
    v8 = 0;
  }
  v9 = *((_QWORD *)this + 8) != 0LL ? 0x40 : 0;
  if ( v9 + 7 < v9 )
    return 3221225495LL;
  v10 = (v9 + 7) & 0xFFFFFFF8;
  v11 = v8 + 7;
  if ( v8 + 7 < v8 )
  {
    v11 = -1;
    v12 = -2147024362;
    v13 = 0;
  }
  else
  {
    v12 = 0;
    v13 = 1;
  }
  v14 = v11 & 0xFFFFFFF8;
  v15 = 0;
  if ( v12 >= 0 )
    v15 = v14;
  if ( !v13 )
    return 3221225495LL;
  if ( v15 + (unsigned int)v10 < (unsigned int)v10 )
    return 3221225495LL;
  v16 = v15 + v10 + 80;
  if ( v16 < 0x50 )
    return 3221225495LL;
  if ( v16 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v17 = (char *)UmfdTls::CommitUMBuffer(a2, v15 + (unsigned int)v10 + 128, 1);
  v18 = v17;
  if ( !v17 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v17 + 48;
  *((_QWORD *)this + 12) = v17 + 128;
  *((_QWORD *)this + 13) = &v17[v10 + 128];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 7), (struct _FONTOBJ *)(v17 + 48));
  *(_DWORD *)(*((_QWORD *)this + 11) + 64LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 11) + 72LL) = 0LL;
  v18[2] = *((_QWORD *)this + 11);
  *v18 = *((_QWORD *)this + 5);
  *((_DWORD *)v18 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v18 + 3) = *((_DWORD *)this + 13);
  if ( *((_QWORD *)this + 8) )
  {
    v19 = *((_QWORD *)this + 12);
  }
  else
  {
    *((_QWORD *)this + 12) = 0LL;
    v19 = 0LL;
  }
  v18[3] = v19;
  v20 = (const void *)*((_QWORD *)this + 9);
  if ( v20 )
  {
    if ( *((_DWORD *)this + 12) == 3 )
      memmove(*((void **)this + 13), v20, *((unsigned int *)this + 20));
    v7 = *((_QWORD *)this + 13);
  }
  else
  {
    *((_QWORD *)this + 13) = 0LL;
  }
  v18[4] = v7;
  *((_DWORD *)v18 + 10) = *((_DWORD *)this + 20);
  *a3 = v18;
  return 0LL;
}
