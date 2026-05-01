/*
 * XREFs of ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180064510
 * Callers:
 *     <none>
 * Callees:
 *     ??0TouchGestureProcessor@@QEAA@AEBU?$com_ptr@VTouchGestureSettings@@@winrt@@@Z @ 0x18006458C (--0TouchGestureProcessor@@QEAA@AEBU-$com_ptr@VTouchGestureSettings@@@winrt@@@Z.c)
 *     ??1TouchGestureProcessor@@QEAA@XZ @ 0x18015EB70 (--1TouchGestureProcessor@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchGestureComponent::perform_delayed_initialization(TouchGestureComponent *this)
{
  TouchGestureProcessor *v2; // rdi
  TouchGestureProcessor **v3; // rsi
  TouchGestureProcessor *v4; // rbx
  TouchGestureProcessor *v5; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = operator new(0x110uLL);
  v2 = (TouchGestureProcessor *)TouchGestureProcessor::TouchGestureProcessor(v6, (char *)this + 96);
  v3 = (TouchGestureProcessor **)((char *)this + 88);
  if ( (void **)((char *)this + 88) == &v6 )
  {
    if ( !v2 )
      goto LABEL_3;
    TouchGestureProcessor::~TouchGestureProcessor(v2);
    v5 = v2;
LABEL_7:
    operator delete(v5, 0x110uLL);
    goto LABEL_3;
  }
  v4 = *v3;
  *v3 = v2;
  if ( v4 )
  {
    TouchGestureProcessor::~TouchGestureProcessor(v4);
    v5 = v4;
    goto LABEL_7;
  }
LABEL_3:
  TouchGestureProcessor::Initialize(*v3);
}
