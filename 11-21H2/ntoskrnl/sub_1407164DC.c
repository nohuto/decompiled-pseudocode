/*
 * XREFs of sub_1407164DC @ 0x1407164DC
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14053FB50 @ 0x14053FB50 (sub_14053FB50.c)
 *     sub_14065B3DC @ 0x14065B3DC (sub_14065B3DC.c)
 *     sub_14065C008 @ 0x14065C008 (sub_14065C008.c)
 *     sub_14065CFD4 @ 0x14065CFD4 (sub_14065CFD4.c)
 *     sub_14065DF64 @ 0x14065DF64 (sub_14065DF64.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140719278 @ 0x140719278 (sub_140719278.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140920AB4 @ 0x140920AB4 (sub_140920AB4.c)
 *     sub_1409222C0 @ 0x1409222C0 (sub_1409222C0.c)
 *     sub_1409237B4 @ 0x1409237B4 (sub_1409237B4.c)
 *     sub_140923ED0 @ 0x140923ED0 (sub_140923ED0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140715D90 @ 0x140715D90 (sub_140715D90.c)
 *     sub_1407166AC @ 0x1407166AC (sub_1407166AC.c)
 *     sub_140716758 @ 0x140716758 (sub_140716758.c)
 *     sub_140716ED0 @ 0x140716ED0 (sub_140716ED0.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_140AB4484 @ 0x140AB4484 (sub_140AB4484.c)
 */

__int64 __fastcall sub_1407164DC(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned int v3; // r14d
  unsigned int v6; // esi
  signed int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v15 = 0xFFFFFFFFLL;
  v16 = 0xFFFFFFFFLL;
  v3 = BugCheckParameter4;
  v14[0] = 0xFFFFFFFFLL;
  ExAcquirePushLockExclusiveEx(BugCheckParameter3 + 1784, 0LL);
  v6 = 0;
  v7 = sub_140716758(BugCheckParameter3, v3);
  if ( v7 < 0 )
    goto LABEL_29;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v8 = sub_1406BF400(BugCheckParameter3, v3, &v15);
  else
    v8 = sub_1407C9820(BugCheckParameter3);
  v9 = v8;
  if ( !v8 )
  {
    v7 = -1073741670;
    goto LABEL_29;
  }
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)sub_140716ED0(BugCheckParameter3) )
      goto LABEL_36;
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v9 + 16), &v16)
        : sub_1407C9820(BugCheckParameter3);
    if ( !v10 )
      goto LABEL_36;
    if ( !(*(_DWORD *)(v10 + 20) + *(_DWORD *)(v10 + 24)) )
    {
      *(_WORD *)(v10 + 52) = 0;
      *(_DWORD *)(v10 + 56) = 0;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v16);
    else
      sub_1407C97C0(BugCheckParameter3, &v16);
  }
  if ( (*(_BYTE *)(v9 + 2) & 0x42) == 0 )
  {
    if ( !*(_DWORD *)(v9 + 36) )
    {
LABEL_24:
      if ( *(_DWORD *)(v9 + 44) != -1 )
        sub_140715D90(BugCheckParameter3, v3);
      goto LABEL_26;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v11 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v9 + 40), v14);
    else
      v11 = sub_1407C9820(BugCheckParameter3);
    v12 = v11;
    if ( v11 )
    {
      if ( *(_DWORD *)(v9 + 36) )
      {
        do
          sub_14079B22C(BugCheckParameter3, *(unsigned int *)(v12 + 4LL * v6++));
        while ( v6 < *(_DWORD *)(v9 + 36) );
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, v14);
      else
        sub_1407C97C0(BugCheckParameter3, v14);
      sub_14079BD98(BugCheckParameter3, *(unsigned int *)(v9 + 40));
      goto LABEL_24;
    }
LABEL_36:
    v7 = -1073741670;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v15);
    else
      sub_1407C97C0(BugCheckParameter3, &v15);
    goto LABEL_29;
  }
LABEL_26:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v15);
  else
    sub_1407C97C0(BugCheckParameter3, &v15);
  v7 = (unsigned __int8)sub_1407166AC(BugCheckParameter3, v3) == 0 ? 0xC000009A : 0;
LABEL_29:
  sub_140AB4484(BugCheckParameter3);
  return (unsigned int)v7;
}
