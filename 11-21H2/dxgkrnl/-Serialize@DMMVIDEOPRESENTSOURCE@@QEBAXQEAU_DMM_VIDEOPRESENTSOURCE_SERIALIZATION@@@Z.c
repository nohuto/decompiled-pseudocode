/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C03A8BA4
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C03A8CE8 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_DISPLAY *v7; // rcx
  ADAPTER_DISPLAY *v8; // rcx
  __int64 v9; // r8

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  v4 = *((_QWORD *)this + 5);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    v4 = *((_QWORD *)this + 5);
  }
  v5 = *(_QWORD *)(v4 + 88);
  if ( v5 )
  {
    v6 = *(ADAPTER_DISPLAY **)(v5 + 8);
    if ( !v6 )
    {
      WdLogSingleEntry0(1LL);
      v6 = *(ADAPTER_DISPLAY **)(v5 + 8);
    }
    *((_BYTE *)a2 + 4) = ADAPTER_DISPLAY::IsPartOfDesktop(v6, *((_DWORD *)this + 6));
    v7 = *(ADAPTER_DISPLAY **)(v5 + 8);
    if ( !v7 )
    {
      WdLogSingleEntry0(1LL);
      v7 = *(ADAPTER_DISPLAY **)(v5 + 8);
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsVidPnSourceActive(v7, *((_DWORD *)this + 6));
    v8 = *(ADAPTER_DISPLAY **)(v5 + 8);
    if ( !v8 )
    {
      WdLogSingleEntry0(1LL);
      v8 = *(ADAPTER_DISPLAY **)(v5 + 8);
    }
    *((_BYTE *)a2 + 6) = ADAPTER_DISPLAY::IsVidPnSourceVisible(v8, *((_DWORD *)this + 6));
    v9 = *(_QWORD *)(v5 + 8);
    if ( !v9 )
    {
      WdLogSingleEntry0(1LL);
      v9 = *(_QWORD *)(v5 + 8);
    }
    *((_BYTE *)a2 + 7) ^= (*((_BYTE *)a2 + 7) ^ *(_BYTE *)(4000LL * *((unsigned int *)this + 6)
                                                         + *(_QWORD *)(v9 + 128)
                                                         + 3780)) & 7;
  }
  else
  {
    *((_WORD *)a2 + 2) = 0;
    *((_BYTE *)a2 + 7) &= 0xF8u;
    *((_BYTE *)a2 + 6) = 0;
  }
}
