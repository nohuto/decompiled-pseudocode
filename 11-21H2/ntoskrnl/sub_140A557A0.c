/*
 * XREFs of sub_140A557A0 @ 0x140A557A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     sub_1403BEC24 @ 0x1403BEC24 (sub_1403BEC24.c)
 *     sub_1403BECF8 @ 0x1403BECF8 (sub_1403BECF8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A55B88 @ 0x140A55B88 (sub_140A55B88.c)
 */

__int64 sub_140A557A0()
{
  int LockArray_high; // ebp
  unsigned int v6; // r9d
  unsigned int v7; // r14d
  int v8; // r15d
  __int64 v9; // rdi
  unsigned __int8 *v10; // rbx
  void *v11; // rdx
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned int v14; // r9d
  unsigned int i; // ebx
  unsigned int v16; // r11d
  unsigned __int64 v17; // rbx
  int v18; // r11d
  unsigned int v19; // r10d
  int v20; // edx
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  char v27; // r10
  char v28; // r9
  __int64 v29; // rdx

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  _RAX = 10LL;
  __asm { cpuid }
  v6 = _RDX;
  v7 = BYTE3(_RAX);
  v8 = _RBX;
  if ( !LockArray_high )
  {
    v20 = 0;
    dword_140C4A460 = 0;
    dword_140C4A42C = BYTE2(_RAX);
    byte_140C4A429 = 0;
    dword_140C4A400 = (unsigned __int8)_RAX;
    dword_140C4A418 = BYTE1(_RAX);
    if ( (unsigned __int8)_RAX >= 2u )
    {
      v20 = v6 & 0xF;
      dword_140C4A440 = (unsigned __int8)(v6 >> 5);
      dword_140C4A460 = v20;
    }
    dword_140C4A404 = BYTE1(_RAX) + v20;
    v21 = sub_1403B3BA0();
    qword_140C4D0A8 = sub_1403BECF8((unsigned int)(8 * v21 * dword_140C4A404));
    qword_140C4A450 = sub_1403BECF8((unsigned int)(4 * v21 * dword_140C4A404));
    v22 = sub_1403BECF8((unsigned int)(40 * v21 * dword_140C4A404));
    qword_140C4A408 = v22;
    if ( v21 * dword_140C4A404 )
    {
      _RCX = qword_140C4D0A8;
      v23 = qword_140C4A450;
      v24 = (unsigned int)(v21 * dword_140C4A404);
      do
      {
        *(_QWORD *)_RCX = v22;
        _RCX += 8LL;
        *(_QWORD *)(v22 + 16) = v23;
        v22 += 40LL;
        v23 += 4LL;
        --v24;
      }
      while ( v24 );
    }
    qword_140C4D048 = 0LL;
    qword_140C4A410 = 0LL;
    dword_140C4D044 = dword_140C4A404;
    dword_140C4D058 = dword_140C4A418;
    dword_140C4D0D0 = dword_140C4A460;
    qword_140C4D050 = (__int64)qword_140011A90;
    qword_140C4A438 = (__int64)&qword_140C4A430;
    qword_140C4A430 = (__int64)&qword_140C4A430;
    qword_140C4D0C8 = (__int64)&qword_140C4D0C0;
    qword_140C4D0C0 = (__int64)&qword_140C4D0C0;
    if ( qword_140C4D0A8 && qword_140C4A450 )
    {
      _RCX = 0LL;
      do
      {
        if ( !*((_BYTE *)&unk_140C04D40 + 320 * _RCX + 29) )
        {
          v25 = (_QWORD *)((char *)&unk_140C04D40 + 320 * _RCX + 8);
          v26 = (_QWORD *)qword_140C4D0C8;
          if ( *(__int64 **)qword_140C4D0C8 != &qword_140C4D0C0 )
            __fastfail(3u);
          ++dword_140C4D0A0;
          *v25 = &qword_140C4D0C0;
          v25[1] = v26;
          *v26 = v25;
          qword_140C4D0C8 = (__int64)&unk_140C04D40 + 320 * _RCX + 8;
        }
        _RCX = (unsigned int)(_RCX + 1);
      }
      while ( (unsigned int)_RCX < 0x12 );
    }
  }
  v9 = 0LL;
  v10 = (unsigned __int8 *)&unk_140C04E74;
  v11 = &unk_140C04D60;
  v12 = 32LL;
  do
  {
    result = *v10;
    if ( v10[8] )
    {
      if ( (unsigned int)result < dword_140C4A460 )
        goto LABEL_7;
    }
    else if ( (_BYTE)result != 0xFF && (unsigned int)result < v7 && !_bittest(&v8, result)
           || *((_DWORD *)v10 - 77) == 32 && byte_140C49FE8 )
    {
LABEL_7:
      result = KeAddProcessorAffinityEx((unsigned __int16 *)&unk_140C04D60 + 160 * v9, LockArray_high);
      v11 = &unk_140C04D60;
    }
    v9 = (unsigned int)(v9 + 1);
    v10 += 320;
  }
  while ( (unsigned int)v9 < 0x12 );
  v14 = dword_140C4A418;
  for ( i = 0; i < v14; ++i )
  {
    __writemsr(i + 390, 0LL);
    result = sub_1403BEC24(i);
  }
  if ( dword_140C4A460 )
  {
    __writemsr(0x38Du, 0LL);
    v16 = 0;
    v17 = __readmsr(0x38Fu);
    do
    {
      v17 &= ~(1LL << v12);
      sub_1403BEC24(v14 + v16);
      v16 = v18 + 1;
      ++v12;
    }
    while ( v16 < v19 );
    result = v17;
    v11 = (void *)HIDWORD(v17);
    _RCX = 911LL;
    __writemsr(0x38Fu, v17);
  }
  if ( !LockArray_high )
  {
    sub_140A55B88(_RCX, v11);
    result = (1LL << v28) - 1;
    v29 = result | (((1LL << v27) - 1) << 32);
    qword_140C4A458 = v29;
    if ( byte_140C4A429 )
    {
      result = 0x4000000000000000LL;
      qword_140C4A458 = v29 | 0x4000000000000000LL;
    }
  }
  if ( (unsigned int)dword_140C4A400 >= 2 )
  {
    result = qword_140C4A458;
    __writemsr(0x390u, qword_140C4A458);
  }
  return result;
}
