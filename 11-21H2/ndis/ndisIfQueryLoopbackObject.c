/*
 * XREFs of ndisIfQueryLoopbackObject @ 0x1C0103BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x1C00100D0 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_LqL @ 0x1C0010180 (WPP_RECORDER_SF_LqL.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisIfQueryLoopbackObject(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebp
  int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-28h]

  v6 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, 0x15u, v12);
  if ( !a1 )
    return 3221225485LL;
  if ( v6 <= 0x10285 )
  {
    if ( v6 != 66181 )
    {
      switch ( v6 )
      {
        case 0x10106u:
          if ( *a3 >= 4u )
          {
            *a3 = 4;
            v8 = *(_DWORD *)(a1 + 1120);
            goto LABEL_9;
          }
          break;
        case 0x10280u:
          if ( *a3 )
          {
            *a3 = 1;
            *(_BYTE *)a4 = *(_BYTE *)(a1 + 1216);
            goto LABEL_10;
          }
          return 3221291030LL;
        case 0x10281u:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          v10 = *(_QWORD *)(a1 + 1352);
          goto LABEL_22;
        case 0x10282u:
          if ( *a3 < 8u )
            return 3221291030LL;
          *a3 = 8;
          v10 = *(_QWORD *)(a1 + 1360);
          goto LABEL_22;
        case 0x10283u:
          if ( *a3 >= 4u )
          {
            *a3 = 4;
            v8 = *(_DWORD *)(a1 + 1112);
            goto LABEL_9;
          }
          break;
        case 0x10284u:
          goto LABEL_20;
        default:
          goto LABEL_46;
      }
      return 3221291030LL;
    }
LABEL_20:
    if ( *a3 < 8u )
      return 3221291030LL;
    *a3 = 8;
    v10 = 0x40000000LL;
LABEL_22:
    *(_QWORD *)a4 = v10;
    goto LABEL_10;
  }
  if ( v6 == 66183 )
  {
    if ( *a3 >= 0xD8u )
    {
      *a3 = 216;
      *a4 = *(_DWORD *)(a1 + 1112);
      a4[1] = *(_DWORD *)(a1 + 1116);
      *((_QWORD *)a4 + 3) = 0x40000000LL;
      *((_QWORD *)a4 + 4) = 0x40000000LL;
      a4[2] = 1;
      a4[3] = 2;
      memset(a4 + 16, 0, 0x90uLL);
      a4[4] = *(_DWORD *)(a1 + 1120);
      *((_BYTE *)a4 + 20) = *(_BYTE *)(a1 + 1216);
      *((_BYTE *)a4 + 21) = *(_BYTE *)(a1 + 1217);
      *((_QWORD *)a4 + 5) = *(_QWORD *)(a1 + 1352);
      v11 = *(_QWORD *)(a1 + 1360);
      *((_QWORD *)a4 + 7) = 0LL;
      *((_QWORD *)a4 + 6) = v11;
      a4[52] = *(_DWORD *)(a1 + 576);
      a4[53] = *(_DWORD *)(a1 + 1416);
      goto LABEL_10;
    }
    return 3221291030LL;
  }
  if ( v6 != 66184 )
  {
    switch ( v6 )
    {
      case 0x1028Au:
        if ( *a3 >= 4u )
        {
          *a3 = 4;
          *a4 = 1;
          goto LABEL_10;
        }
        return 3221291030LL;
      case 0x1028Cu:
        if ( *a3 >= 4u )
        {
          *a3 = 4;
          *a4 = 2;
          goto LABEL_10;
        }
        return 3221291030LL;
      case 0x20106u:
        if ( *a3 >= 0x90u )
        {
          *a3 = 144;
          memset(a4, 0, 0x90uLL);
          goto LABEL_10;
        }
        return 3221291030LL;
    }
LABEL_46:
    if ( *a3 >= 8u )
    {
      *a3 = 8;
      *(_QWORD *)a4 = 0LL;
      goto LABEL_10;
    }
    return 3221291030LL;
  }
  if ( *a3 < 4u )
    return 3221291030LL;
  *a3 = 4;
  v8 = *(_DWORD *)(a1 + 1192);
LABEL_9:
  *a4 = v8;
LABEL_10:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      (int)a3,
      0x16u,
      (struct _GUID *)&WPP_ebf57095e638305b5a9962a85db12dfe_Traceguids,
      v6,
      (char)a4,
      *a3);
  return 0LL;
}
