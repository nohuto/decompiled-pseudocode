/*
 * XREFs of sub_14071BF40 @ 0x14071BF40
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     sub_1406800D0 @ 0x1406800D0 (sub_1406800D0.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140681670 @ 0x140681670 (sub_140681670.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     sub_140916720 @ 0x140916720 (sub_140916720.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_1409192C8 @ 0x1409192C8 (sub_1409192C8.c)
 *     sub_140919308 @ 0x140919308 (sub_140919308.c)
 *     sub_140920E78 @ 0x140920E78 (sub_140920E78.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_1406FEA54 @ 0x1406FEA54 (sub_1406FEA54.c)
 *     sub_14071B8C0 @ 0x14071B8C0 (sub_14071B8C0.c)
 *     sub_14071BB4C @ 0x14071BB4C (sub_14071BB4C.c)
 *     sub_1407C0854 @ 0x1407C0854 (sub_1407C0854.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

void __fastcall sub_14071BF40(ULONG_PTR BugCheckParameter4)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  bool v6; // cl
  unsigned int v7; // ebx
  _QWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  _LIST_ENTRY ListHead; // [rsp+30h] [rbp-18h] BYREF

  ListHead = 0LL;
  InitializeListHead(&ListHead);
  v2 = *(_QWORD *)BugCheckParameter4;
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  if ( *(_QWORD *)BugCheckParameter4 <= 1uLL )
  {
LABEL_11:
    v7 = *(_DWORD *)(BugCheckParameter4 + 16);
    v8 = *(_QWORD **)(BugCheckParameter4 + 32);
    sub_14071BB4C(BugCheckParameter4);
    sub_1407C0854(BugCheckParameter4);
    v9 = *(_QWORD *)(BugCheckParameter4 + 192);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 24);
      if ( v11 )
      {
        v10 = *(_QWORD *)(v11 + 16);
        sub_140AB4300(BugCheckParameter4);
        sub_1407C0854(v10);
        sub_1407C0854(BugCheckParameter4);
      }
    }
    sub_1406FEA54(BugCheckParameter4, (__int64)&ListHead, 0);
    sub_140AB4300(BugCheckParameter4);
    if ( v10 )
      sub_140AB4300(v10);
    sub_14071B8C0(v8, v7);
    sub_140346C60(&ListHead);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 - 1;
      v5 = v2;
      v6 = v2 == 3 && (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2944) == 1;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter4, v4, v2);
      if ( v2 == v5 )
        break;
      if ( v2 <= 1 )
        goto LABEL_11;
    }
    if ( v2 < v4 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter4, 0LL, 0LL);
    if ( v6 )
      sub_1406CE3EC(v3);
  }
}
