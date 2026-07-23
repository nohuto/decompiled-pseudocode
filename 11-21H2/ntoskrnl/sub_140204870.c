/*
 * XREFs of sub_140204870 @ 0x140204870
 * Callers:
 *     sub_140203EE0 @ 0x140203EE0 (sub_140203EE0.c)
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_1403763A8 @ 0x1403763A8 (sub_1403763A8.c)
 *     sub_140377258 @ 0x140377258 (sub_140377258.c)
 *     sub_1405F3E6C @ 0x1405F3E6C (sub_1405F3E6C.c)
 *     sub_1405F4338 @ 0x1405F4338 (sub_1405F4338.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 *     sub_1405F577C @ 0x1405F577C (sub_1405F577C.c)
 *     sub_14066B830 @ 0x14066B830 (sub_14066B830.c)
 *     sub_140672120 @ 0x140672120 (sub_140672120.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     sub_14084C934 @ 0x14084C934 (sub_14084C934.c)
 *     sub_1409CC540 @ 0x1409CC540 (sub_1409CC540.c)
 * Callees:
 *     sub_140204758 @ 0x140204758 (sub_140204758.c)
 *     sub_1402047C4 @ 0x1402047C4 (sub_1402047C4.c)
 *     sub_140204E2C @ 0x140204E2C (sub_140204E2C.c)
 *     sub_14020517C @ 0x14020517C (sub_14020517C.c)
 *     sub_1402053E4 @ 0x1402053E4 (sub_1402053E4.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_14064A2A8 @ 0x14064A2A8 (sub_14064A2A8.c)
 */

__int64 __fastcall sub_140204870(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r14d
  int v7; // ebx
  __int64 v8; // rbp
  __int128 *v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  if ( a3 )
  {
    v7 = sub_14020517C(a3);
    if ( v7 >= 0 )
    {
      if ( v3 == 1 )
        sub_14064A2A8(a1);
      v8 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v9 = (__int128 *)(*(_QWORD *)(a3 + 8) + 40 * v8);
          if ( v3 == 1 )
            goto LABEL_11;
          v10 = a2[v8];
          if ( v10 )
            break;
          v7 = 0;
LABEL_13:
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 4) )
            goto LABEL_14;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_18;
LABEL_11:
            v13 = sub_140204758(a1, v9);
          }
          else
          {
            v13 = sub_1402053E4(a1, v9);
          }
        }
        else
        {
          v13 = sub_1402047C4(a1, (__int64)v9);
        }
        v7 = v13;
        if ( v13 < 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    sub_14028AB90();
    v7 = 0;
  }
  else
  {
LABEL_18:
    v7 = -1073741811;
  }
LABEL_14:
  sub_140204E2C(a1, v7 >= 0);
  return (unsigned int)v7;
}
