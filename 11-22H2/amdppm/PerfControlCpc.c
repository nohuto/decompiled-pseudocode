/*
 * XREFs of PerfControlCpc @ 0x1C00018F0
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0001BD0 (PerformanceFromPercentage.c)
 *     WriteGenAddrEx @ 0x1C0002910 (WriteGenAddrEx.c)
 *     WriteGenAddr @ 0x1C0002990 (WriteGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0003E08 (ReadIoMemRawEx.c)
 *     WriteIoMemRaw @ 0x1C0003F7C (WriteIoMemRaw.c)
 */

void __fastcall PerfControlCpc(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  bool v6; // zf
  _BYTE *v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rsi
  _BYTE *v11; // r11
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  __int64 IoMemRaw; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  bool v19; // cc
  __int64 v20; // rcx
  char v21; // cl
  _BYTE *v22; // rax
  __int64 v23; // rax
  signed __int32 v24[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (_BYTE)a3 || a4 )
  {
    v6 = *(_BYTE *)(a1 + 125) == 0;
    v7 = *(_BYTE **)(a1 + 144);
    v8 = *((unsigned int *)a2 + 4);
    v9 = *((_DWORD *)a2 + 5);
    *(_QWORD *)(a1 + 80) = *a2;
    if ( !v6 )
    {
      if ( *((_BYTE *)a2 + 36) )
        v13 = 0LL;
      else
        v13 = *a2;
      WriteGenAddrEx(v7 + 128, v13);
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      if ( (_DWORD)v8 == *(_DWORD *)(a1 + 100) )
      {
        v10 = *(_QWORD *)(a1 + 40);
      }
      else if ( (_DWORD)v8 == 100 )
      {
        v10 = *(_QWORD *)(a1 + 48);
      }
      else if ( *(_BYTE *)(a1 + 131) && (_DWORD)v8 == *(_DWORD *)(a1 + 116) )
      {
        v10 = *(_QWORD *)(a1 + 88);
      }
      else if ( (_DWORD)v8 == *(_DWORD *)(a1 + 108) )
      {
        v10 = *(_QWORD *)(a1 + 56);
      }
      else if ( (_DWORD)v8 == *(_DWORD *)(a1 + 112) )
      {
        v10 = *(_QWORD *)(a1 + 64);
      }
      else
      {
        v10 = (*(_QWORD *)(a1 + 48) * v8 + 50) / 0x64uLL;
      }
      v11 = v7 + 152;
      v12 = v7[152];
      if ( v12 == 1 || v12 == 127 )
      {
        WriteGenAddr(v7 + 152, v10);
      }
      else
      {
        if ( v7[154] || v7[153] != 64 )
        {
          IoMemRaw = ReadIoMemRawEx(v7 + 152);
          v15 = v11[1];
          if ( v15 < 0x40u || v11[2] )
          {
            a3 = (unsigned __int8)v11[2];
            v10 = IoMemRaw & ~(((1LL << v15) - 1) << a3) | (((1LL << v15) - 1) << a3) & (v10 << a3);
          }
          else
          {
            LOBYTE(a3) = 0;
          }
        }
        else
        {
          LOBYTE(a3) = 0;
          v15 = 64;
        }
        if ( *v11 )
        {
          if ( *v11 == 10 )
          {
            v17 = (unsigned __int8)a3 + v15;
            v18 = *((_QWORD *)v11 + 2);
            if ( v17 > 8 )
            {
              if ( v17 > 0x10 )
              {
                v19 = v17 <= 0x20;
                v20 = *(_QWORD *)(v18 + 88);
                if ( v19 )
                  *(_DWORD *)(*(_QWORD *)(v11 + 4) + v20) = v10;
                else
                  *(_QWORD *)(*(_QWORD *)(v11 + 4) + v20) = v10;
                _InterlockedOr(v24, 0);
              }
              else
              {
                *(_WORD *)(*(_QWORD *)(v11 + 4) + *(_QWORD *)(v18 + 88)) = v10;
                _InterlockedOr(v24, 0);
              }
            }
            else
            {
              *(_BYTE *)(*(_QWORD *)(v11 + 4) + *(_QWORD *)(v18 + 88)) = v10;
              _InterlockedOr(v24, 0);
            }
          }
          else
          {
            WriteIoMemRaw(v11, v10, a3);
          }
        }
        else
        {
          v21 = v11[3];
          v22 = (_BYTE *)*((_QWORD *)v11 + 2);
          switch ( v21 )
          {
            case 8:
              *v22 = v10;
              _InterlockedOr(v24, 0);
              break;
            case 16:
              *(_WORD *)v22 = v10;
              _InterlockedOr(v24, 0);
              break;
            case 32:
              *(_DWORD *)v22 = v10;
              _InterlockedOr(v24, 0);
              break;
            case 64:
              *(_QWORD *)v22 = v10;
              _InterlockedOr(v24, 0);
              break;
          }
        }
      }
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v14 = PerformanceFromPercentage(a1, v9);
      WriteGenAddrEx(v7 + 176, v14);
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      v23 = PerformanceFromPercentage(a1, *((unsigned int *)a2 + 6));
      WriteGenAddrEx(v7 + 200, v23);
    }
    if ( *(_BYTE *)(a1 + 128) )
      WriteGenAddrEx(v7 + 416, 255 * *((_DWORD *)a2 + 7) / 0x64u);
  }
}
