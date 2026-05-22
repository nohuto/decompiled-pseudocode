/*
 * XREFs of ??0FlickRecognizer@@QEAA@XZ @ 0x1801D4108
 * Callers:
 *     ??0GestureSession@@AEAA@XZ @ 0x1801D32F4 (--0GestureSession@@AEAA@XZ.c)
 * Callees:
 *     ??0PointData@GestureRecognizer@@QEAA@XZ @ 0x18002FD80 (--0PointData@GestureRecognizer@@QEAA@XZ.c)
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x1801D64E8 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
FlickRecognizer *__fastcall FlickRecognizer::FlickRecognizer(FlickRecognizer *this)
{
  GestureRecognizer::PointData *v2; // rdi
  __int64 v3; // rsi

  *((_DWORD *)this + 2) = 256;
  *(_QWORD *)this = &FlickRecognizer::`vftable';
  v2 = (FlickRecognizer *)((char *)this + 16);
  v3 = 10LL;
  do
  {
    GestureRecognizer::PointData::PointData(v2);
    v2 = (GestureRecognizer::PointData *)((char *)v2 + 12);
    --v3;
  }
  while ( v3 );
  GestureRecognizer::StaticInitConfig();
  *((_WORD *)this + 78) = FlickRecognizer::s_minimumFlickSpeed;
  *((_WORD *)this + 79) = FlickRecognizer::s_minimumFlickDelta;
  *((_WORD *)this + 80) = FlickRecognizer::s_maximumFlickTail;
  *((_WORD *)this + 81) = FlickRecognizer::s_maximumFlickUp;
  return this;
}
