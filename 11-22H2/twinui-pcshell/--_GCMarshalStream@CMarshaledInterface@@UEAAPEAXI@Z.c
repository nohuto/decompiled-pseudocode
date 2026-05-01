/*
 * XREFs of ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x1800E2AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMarshalStream@CMarshaledInterface@@UEAA@XZ @ 0x1800E2B2C (--1CMarshalStream@CMarshaledInterface@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

CMarshaledInterface::CMarshalStream *__fastcall CMarshaledInterface::CMarshalStream::`scalar deleting destructor'(
        CMarshaledInterface::CMarshalStream *this,
        char a2)
{
  CMarshaledInterface::CMarshalStream::~CMarshalStream(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
