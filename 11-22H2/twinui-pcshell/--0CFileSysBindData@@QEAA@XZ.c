/*
 * XREFs of ??0CFileSysBindData@@QEAA@XZ @ 0x180751790
 * Callers:
 *     ?CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180753168 (-CreateFileSystemBindData@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

CFileSysBindData *__fastcall CFileSysBindData::CFileSysBindData(CFileSysBindData *this)
{
  CFileSysBindData *result; // rax

  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &CFileSysBindData::`vftable';
  memset_0((char *)this + 40, 0, 0x250uLL);
  memset_0((char *)this + 16, 0, 8uLL);
  result = this;
  *(_OWORD *)((char *)this + 24) = xmmword_1808B7C70;
  return result;
}
