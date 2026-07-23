/*
 * XREFs of sub_140424120 @ 0x140424120
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140424120(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // r11
  _QWORD *v4; // r10
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r8
  _QWORD *v8; // rbx
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = (_QWORD *)*((_QWORD *)CurrentThread + 5);
  v5 = v4[4];
  if ( v5 >= 0 )
  {
    if ( v5 > 0 )
      KeBugCheckEx(0x1CDu, (ULONG_PTR)CurrentThread, v4[4], 0LL, 0LL);
    return 3221226072LL;
  }
  else
  {
    result = a3;
    **(_QWORD **)(v5 + 216) = a1;
    **(_DWORD **)(v5 + 224) = a2;
    _disable();
    v7 = *(_QWORD *)(v5 + 208);
    v8 = (_QWORD *)*((_QWORD *)CurrentThread + 18);
    *((_QWORD *)CurrentThread + 18) = v7;
    v9 = (*((_BYTE *)CurrentThread + 3) & 3) == 0;
    *(_WORD *)(v7 + 256) = 0;
    if ( !v9 )
    {
      v10 = v8[28];
      *(_QWORD *)(v7 + 216) = v8[27];
      *(_QWORD *)(v7 + 224) = v10;
      v11 = v8[30];
      *(_QWORD *)(v7 + 232) = v8[29];
      *(_QWORD *)(v7 + 240) = v11;
      *(_QWORD *)(v7 + 256) = v8[32];
    }
    v12 = v4[6];
    if ( v12 )
    {
      *((_QWORD *)CurrentThread + 131) = v12;
      *((_QWORD *)CurrentThread + 132) = v4[7];
      v13 = *((_QWORD *)CurrentThread + 130);
      v14 = v4[9];
      *((_QWORD *)CurrentThread + 130) = v14;
      __writegsqword(0x9828u, v14);
      __asm { rdsspq  rcx }
      _RDX = (unsigned __int64)(v13 + 8 - _RCX) >> 3;
      __asm { incsspq rdx }
      _RCX = v4[8];
      __asm
      {
        rstorssp qword ptr [rcx]
        saveprevssp
      }
    }
    v18 = v4[2];
    *((_QWORD *)CurrentThread + 7) = v18;
    *((_QWORD *)CurrentThread + 6) = v18 - (unsigned int)dword_140D05050;
    v19 = v4[5];
    *((_QWORD *)CurrentThread + 5) = v19;
    if ( (byte_140E01840 & 1) != 0 )
      __writegsqword(0xA008u, v19);
    else
      *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 4) = v19;
    __writegsqword(0x1A8u, v19);
    _enable();
  }
  return result;
}
