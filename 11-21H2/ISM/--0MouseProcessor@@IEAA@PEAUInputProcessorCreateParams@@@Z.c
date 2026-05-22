/*
 * XREFs of ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18003C088
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800391E0 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
MouseProcessor *__fastcall MouseProcessor::MouseProcessor(MouseProcessor *this, struct InputProcessorCreateParams *a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  int (__fastcall ***v8)(_QWORD, GUID *, char *); // rcx

  v4 = *((_QWORD *)a2 + 1);
  v5 = *(_QWORD *)a2;
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 7) = v5;
  *((_QWORD *)this + 6) = v4;
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 2) = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = &MouseProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 108) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  v6 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 18) = v6;
  v7 = (_DWORD *)((char *)this + 152);
  memset_0((char *)this + 152, 0, 0x60CuLL);
  v7[2] = 1548;
  *v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  *((_DWORD *)this + 39) = 8;
  *((_BYTE *)this + 1700) = 0;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_DWORD *)this + 26) = 0;
  v8 = (int (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)a2 + 2);
  if ( v8 && (**v8)(v8, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8, (char *)this + 1712) >= 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 214) + 16LL))(*((_QWORD *)this + 214));
  return this;
}
