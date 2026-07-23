/*
 * XREFs of sub_1402F25C0 @ 0x1402F25C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140347550 @ 0x140347550 (sub_140347550.c)
 *     sub_14036CD34 @ 0x14036CD34 (sub_14036CD34.c)
 *     sub_14054CAE0 @ 0x14054CAE0 (sub_14054CAE0.c)
 */

unsigned __int64 __fastcall sub_1402F25C0(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v4; // rbp
  signed __int32 v8; // eax
  unsigned int v9; // edi
  signed __int32 v10; // eax
  unsigned int v11; // edi
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int i; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v8 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v9 = ~v8 & 0x80000000;
  if ( (v8 & 0x7FFFFFFF) != 0 )
  {
    v16 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v9 )
      sub_1402F32E0(&v16);
  }
  else
  {
    *(_DWORD *)a4 = v9 | *(_DWORD *)(a4 + 4);
  }
  if ( (unsigned int)sub_14036CD34(*(_QWORD *)(a2 + 16)) )
    *(_BYTE *)a2 = 1;
  v10 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v11 = ~v10 & 0x80000000;
  if ( (v10 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; sub_1402F32E0(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v11 )
        break;
    }
  }
  else
  {
    result = v11 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  if ( *(_BYTE *)a2 )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( *(_QWORD *)(result + 184) == v4 )
    {
      v13 = *(_QWORD *)(v4 + 40);
      if ( byte_140E01840 )
      {
        v14 = v13 | 0x8000000000000000uLL;
        if ( (v13 & 2) == 0 )
          v14 = *(_QWORD *)(v4 + 40);
        __writegsqword(0xA000u, v14);
        sub_140347550(*(unsigned __int8 *)(v4 + 912));
      }
      result = (unsigned int)dword_140D0689C;
      if ( (dword_140D0689C & 1) != 0 )
        result = sub_14054CAE0(v13);
      else
        __writecr3(v13);
      if ( !byte_140D0688A && byte_140E01840 )
      {
        v15 = __readcr4();
        if ( (v15 & 0x20080) != 0 )
        {
          result = v15 ^ 0x80;
          __writecr4(v15 ^ 0x80);
          __writecr4(v15);
        }
        else
        {
          result = __readcr3();
          __writecr3(result);
        }
      }
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
