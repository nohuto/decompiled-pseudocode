/*
 * XREFs of sub_140A3731C @ 0x140A3731C
 * Callers:
 *     sub_140652894 @ 0x140652894 (sub_140652894.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_140203D50 @ 0x140203D50 (sub_140203D50.c)
 *     sub_1403FCC10 @ 0x1403FCC10 (sub_1403FCC10.c)
 *     sub_140401E3C @ 0x140401E3C (sub_140401E3C.c)
 *     sub_14040362C @ 0x14040362C (sub_14040362C.c)
 *     sub_140404980 @ 0x140404980 (sub_140404980.c)
 *     sub_140405390 @ 0x140405390 (sub_140405390.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A378B4 @ 0x140A378B4 (sub_140A378B4.c)
 *     sub_140A3792C @ 0x140A3792C (sub_140A3792C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A3731C(int a1, __int64 a2, unsigned int *a3, _OWORD *a4, __int64 a5)
{
  char v5; // r15
  _DWORD *Pool2; // rax
  _DWORD *v10; // rbx
  int v11; // ebp
  size_t v12; // r8
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  __int64 v17; // r8

  v5 = byte_140CE21F0;
  if ( byte_140CE21F0 )
    Pool2 = sub_140202234((__int64)&unk_140D04500);
  else
    Pool2 = (_DWORD *)ExAllocatePool2(258LL, 240LL, 1919109443LL);
  v10 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = a1;
    v11 = sub_140A3792C(Pool2, a5);
    if ( v11 >= 0 )
    {
      v17 = *a3;
      if ( (_DWORD)v17 )
        sub_140A378B4(v10, *((_QWORD *)a3 + 1));
      switch ( *v10 )
      {
        case 0x8003:
          sub_140405390((__int64)(v10 + 4), a4);
          break;
        case 0x8004:
          sub_140404980(v10 + 4, a4);
          break;
        case 0x800C:
          sub_1403FCC10(v10 + 4, a4);
          break;
        case 0x800D:
          sub_140401E3C((__int64)(v10 + 4), a4);
          break;
        case 0x800E:
          sub_14040362C(v10 + 4, a4);
          break;
      }
      goto LABEL_30;
    }
  }
  else
  {
    v11 = -1073741801;
  }
  v12 = 0LL;
  v13 = a1 - 32771;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 8;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            v12 = 64LL;
        }
        else
        {
          v12 = 48LL;
        }
      }
      else
      {
        v12 = 32LL;
      }
    }
    else
    {
      v12 = 20LL;
    }
  }
  else
  {
    v12 = 16LL;
  }
  memset(a4, 0, v12);
  if ( v10 )
  {
LABEL_30:
    if ( v5 )
      sub_140203D50((__int64)&unk_140D04500, (_SLIST_ENTRY *)v10, v17);
    else
      ExFreePoolWithTag(v10, 0x72634943u);
  }
  return (unsigned int)v11;
}
